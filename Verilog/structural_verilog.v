/*
module module_name(outputs,inputs);//port list is (outputs,inputs)// we don't write wires 
    input inputs;//by default it is assumed 1 bit
    output outputs;
    wire interconnecting_wire;
    gate variable_name(output,inputs); //variable_name is instance of gate gate
    // (~ to object and class)
endmodule
*/

/*

Two ways to describe:
 Structural Verilog
     List of components and how they are connected
     Just like schematics, but using text
     Hard to write, hard to decode
     Useful if you don’t have integrated design tools
    IT IS EXecuted CONCURRENTLY
 Behavioral Verilog
     Describe what a component does, not how it does it
     Synthesized into a circuit that has this behavio

*/

/*
 All statements in Verilog are concurrent
(executed simultaneously)- unless they are
inside a sequential block
*/
