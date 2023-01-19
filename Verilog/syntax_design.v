module module_name(outputs,inputs);//port list is (outputs,inputs)// we don't write wires 
    input inputs;//by default it is assumed 1 bit
    output outputs;
    wire interconnecting_wire;
    gate variable_name(output,inputs); //variable_name is instance of gate gate
    // (~ to object and class)
endmodule