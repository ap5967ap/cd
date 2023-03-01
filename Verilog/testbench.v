/*
TESTBENCH
    ● Connect the design to a test module
    ● Test module or test bench provides input signals to verify the design
    ● The design module cannot be described inside a testbench
    ● Testbench is only meant to provide stimulus/ test inputs
*/
/*
4 Signals:
    1
    0
    Z (high impedance)
    X (unknown)
*/

/*
    CLASS OF SIGNALS
    ●Nets:  interconnection between hardware elements (gates)
            If a net has no driver, it gets the value Z(high impedance).
            nets have values continuously driven on them by the outputs of device
            Data Type = wire
            Not hold a value 
            stores inputs (generally)
    ●Reg
            retains value until another value is placed onto them
            If a reg has no driver, it gets the value X(unknown).
            Reg is a variable that can hold a value. Unlike a net, a register does not need a driver
            stores outputs (generally)




*/      


/*
`timescale 1ns/1ns
`include "filename.v" //filename_of_structural_code

module filename_tb;//can be any name 
    reg inputs;
    wire outputs;
    filename uut (outputs,inputs);//order in design file should be same
    //alter
    module_name_in_design variable_name (outputs,inputs);//order in design file should be same
    initial 
    begin 
        $dumpfile("filename_tb.vcd");
        $dumpvars(0,filename_tb);
        // input values 
        #wait_time
    end
        
endmodule


*/
/*
ex:
    reset = 1'b1; //initialize reset to 1 to reset the digital circuit.
    #100;
    reset = 1'b0; // after 100 time units reset is deasserted. 


*/

/*
    INTIAL BLOCK
            Initial block
           Starts at time 0, executes exactly once during a simulation
           Contents inside the block are sequential
           Multiple initial blocks--> each block starts to execute concurrently at time 0 but statement inside each is sequential 
                module stimulus;
                    initial
                    begin
                        #5 a = 1'b1;
                        #25 z = 1'b0;
                    end
                endmodule

*/
/*
Assignments always happen to reg
Assignments always happen in initial/always blocks
*/

/*
    ALWAYS Block
    starts at time 0 and executes continuously in a loop infinitely until the simulation is killed
    Always waiting for a change to a trigger signal and then executes body continuously
    
        always @(t1 or t2) // if the value of t1 or t2 changes then always block is triggered
            begin
                statements;
            end
