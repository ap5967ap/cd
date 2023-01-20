module xor_g(y,a,b);
    input a,b;
    output y;
    wire nA,nB,AnB,nAB;
    not notA(nA,A);
    not notB(nB,B);
    and andA(AnB,nB,A);
    and andB(nAB,nA,B);
    or xorab(y,AnB,nAB);
endmodule