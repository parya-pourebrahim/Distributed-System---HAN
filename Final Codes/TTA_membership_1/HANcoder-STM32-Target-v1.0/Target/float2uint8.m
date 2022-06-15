%% CODER from float to uint8
% In the code we work with real numbers, but through CAN we can only send
% uint8 numbers. It is important to code the sign and the decimals
% information. An additional input 'precision' lets the user decide how
% many bits are reserved for the irrational part of the number.

function uint8_code = float2uint8(precision, magnitude)    
    % Sign
    if magnitude < 0
        sign = 1;
    else
        sign = 0;
    end
    
    % Separate integer and decimal part
    magnitude = abs(magnitude);
    integer = fix(magnitude);
    decimal = magnitude - integer;
    
    % Integer size in binary
    int_bit_space = 7 - precision;
    % <!> Overflow check
    if 2^int_bit_space <= integer
        disp('Overflow!')
        uint8_code = uint8(0);
        return;        
    end
    
    % Decimal part
    prec_mag = 2^(-precision);
    bindec = fix(decimal/prec_mag);
    
    % Complete number in binary code
    uint8_code = uint8(bindec + integer*2^precision + sign*2^7);
   
end