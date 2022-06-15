%% Execute this function while you have your v0.5 model open in Simulink to update the blocks in the model
% to version 1.0
function [] = UpdateModelToNewVersion()
HANcoderBlocks = find_system(bdroot,'IncludeCommented','on','RegExp', 'on', 'LookUnderMasks', 'All', 'Tag', 'HANcoder_TARGET_.');
newVersion = '1.0';
showWarning = 0;

for index=1:1:length(HANcoderBlocks)
    block = HANcoderBlocks{index}; % Store current block in easier ID (to improve readability)
    HANcoderStruct = get_param(block,'UserData');
    if isempty(HANcoderStruct) % No UserData indicates a blockset before 0.5 or an other problem
        showWarning = 1; % Set variable to 1 to make sure a warning dialog is presented to the user
        disp([block, ' has no version number, it can therefor not be replaced automatically, please update the block manually'])
    elseif(str2double(HANcoderStruct.BlocksetVersion) < str2double(newVersion)) % Only change something if the block is older than the current blockset version
        switch HANcoderStruct.BlockType
            case 'FileLoggerInit'
                showWarning = 1; % Set variable to 1 to make sure a warning dialog is presented to the user
                disp([block,' cannot be replaced automatically, please replace this block manually.']);
            case 'FileLoggerSignal'
                showWarning = 1; % Set variable to 1 to make sure a warning dialog is presented to the user
                disp([block,' cannot be replaced automatically, please replace this block manually.']);
            case 'SPImasterTransfer'
                priority = get_param(block,'priority');
                channel = get_param(block,'channel');
                useSS = get_param(block,'useSS');
                SSpin = get_param(block,'SSpin');
                SSenable = get_param(block,'SSenable');
                SSdisable = get_param(block,'SSdisable');
                delayCycles = get_param(block,'delayCycles');
                % userPriority = get_param(block,'userPriority'); Didn't exist before version 1.0
                tsamp = get_param(block, 'tsamp');
                % Get the position of the  block
                currentPosition = get_param(block, 'Position');
                % Remove the current block
                delete_block(block);
                switch HANcoderStruct.Device
                    case 'Olimexino'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/Olimexino STM32/System Config/SPI master transfer', block)
                    case 'E407'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/STM32-E407/System Config/SPI master transfer', block)
                    case 'P405'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/STM32-P405/System Config/SPI master transfer', block)
                    otherwise
                end
                % Align the new block to be placed at the position of the removed block
                set_param(block, 'Position', currentPosition);
                set_param(block, 'priority',priority);
                set_param(block, 'userPriority', priority);
                set_param(block, 'channel', channel);
                set_param(block, 'useSS',useSS);
                set_param(block, 'SSpin', SSpin);
                set_param(block, 'SSenable', SSenable);
                set_param(block, 'SSdisable',SSdisable);
                set_param(block, 'delayCycles', delayCycles);
                set_param(block, 'tsamp', tsamp);
                
            case 'BaseSampleTimeConfig'
                baseSampleTime = get_param(block,'baseSampleTime');
                extraStack = get_param(block,'extraStack');
                % Get the position of the  block
                currentPosition = get_param(block, 'Position');
                % Remove the current block
                delete_block(block);
                switch HANcoderStruct.Device
                    case 'Olimexino'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/Olimexino STM32/System Config/Base Sample Time config', block)
                    case 'E407'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/STM32-E407/System Config/Base Sample Time config', block)
                    case 'P405'
                        % Add a new Base Sample Time Block
                        add_block('HANcoder_STM32_Target/STM32-P405/System Config/Base Sample Time config', block)
                    otherwise
                end
                % Align the new block to be placed at the position of the removed block
                set_param(block, 'Position', currentPosition);
                set_param(block, 'baseSampleTime',baseSampleTime);
                set_param(block, 'extraStack', extraStack);
            otherwise
                HANcoderStruct.BlocksetVersion = newVersion; % update the BlocksetVersion
                set_param(block,'UserData',HANcoderStruct); % Load HANcoderStruct back into block
        end
    end % end of if.. elsif statement
end

if showWarning
    warndlg('One or more blocks couldn''t be replaced automatically, please check the output of this script to see which blocks caused problems')
end