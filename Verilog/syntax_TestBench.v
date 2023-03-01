`timescale 1ns/1ns

module filename_tb;//can be any name 
    reg inputs;
    wire outputs;
    module_name_in_design variable_name (outputs,inputs);//order in design file should be same
    initial 
    begin 
        $dumpfile("filename_out.vcd");
        $dumpvars(0,filename_tb);
        input value1 =intput_value; input value1 =intput_value; #wait_time; 
    end
        
endmodule