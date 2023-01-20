`timescale 1ns/1ns

module xortb;
    reg A;
    reg B;
    wire Y;
    xor_g xo(Y,A,B);
    initial 
    begin
        $dumpfile("xor_out.vcd");
        $dumpvars(0,xortb);
        A=0;B=0;#50;
        A=0;B=1;#50;
        A=1;B=0;#50;
        A=1;B=1;#50;
    end




endmodule