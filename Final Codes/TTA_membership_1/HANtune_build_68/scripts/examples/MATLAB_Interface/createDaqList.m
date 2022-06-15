function [daqItemNames, daqList] = createDaqList(modelName, filter)
    eval(modelName + "([], [], [], 'compile')");
    blocks = find_system(modelName, 'FindAll', 'on', 'FollowLinks', 'on', 'Virtual', 'off', 'type', 'block');
    daqList = [];
    daqItemNames = [];
    daqItemIndex = 1;
    for blockHandle = blocks.'
        block = get(blockHandle);
        for portHandle = block.PortHandles.Outport
            port = get(portHandle);
            portSize = getPortSize(port);
            for i = 1 : portSize

                signalName = '';
                if(strcmp(filter, 'signals') && ~strcmp(port.UserSpecifiedLogName, ''))
                    signalName = port.UserSpecifiedLogName;
                elseif (strcmp(filter, 'blocks'))
                    signalName = getFullBlockName(modelName, blockHandle);
                end

                if (block.BlockType == "SubSystem")
                    signalName = signalName + ":" + getInternalPortName(block, port);
                end

                if (portSize > 1)
                    signalName = signalName + ":" + i;
                end

                if (~strcmp(signalName, ''))
                    daqItemNames{daqItemIndex} = signalName;
                    daqList(daqItemIndex,:) = [blockHandle, port.PortNumber, i];
                    daqItemIndex = daqItemIndex + 1;
                end
            end
        end
    end
    eval(modelName + "([], [], [], 'term')");
end

function name = getInternalPortName(block, port)
    outportHandle = find_system(block.Path + "/" + block.Name, 'FindAll', 'on', 'SearchDepth', 1, 'BlockType', 'Outport', 'Port', int2str(port.PortNumber));
    outport = get(outportHandle);
    name = outport.Name;
end

function name = getFullBlockName(modelName, block)
    blockName = getfullname(block);
    name = erase(blockName, modelName + "/");
end

function portSize = getPortSize(port)
    portSize = 0;
    if (~isempty(port.CompiledPortDimensions))
        dimensions = port.CompiledPortDimensions;
        index = 1;

        while index < length(dimensions)
            valueSize = 1;
            for j = 1 : dimensions(index)
                index = index + 1;
                valueSize = valueSize * dimensions(index);
            end
            portSize = portSize + valueSize;
            index = index + 1;
        end
    end
end