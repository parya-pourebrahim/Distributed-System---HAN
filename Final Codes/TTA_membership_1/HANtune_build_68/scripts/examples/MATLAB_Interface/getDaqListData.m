function data = getDaqListData(modelName, daqList, daqLength)
    status = get_param(modelName, 'SimulationStatus');
    if (strcmp(status, 'running'))
        data = getData(daqList, daqLength);
    else
        data = [];
    end
end

function data = getData(daqList, daqSize)
    data = zeros(1, daqSize);
    for i = 1 : daqSize
        block = daqList(i, 1);
        port = daqList(i, 2);
        index = daqList(i, 3);
        rto = get_param(block, 'RuntimeObject');
        if ~isempty(rto) && rto.NumOutputPorts > 0
            result = rto.OutputPort(port).Data;
            if (isstruct(result))
                data(i) = result.("signal" + index);
            else
                data(i) = result(index);
            end
        end
    end
end