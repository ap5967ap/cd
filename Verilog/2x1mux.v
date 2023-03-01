module 2x1mux(y,i0, i1, s);
    input i0, i1,s;
    output y;
    wire ns,i0s, i1s;
    not nots(i0s,s);
    and andi1(i1s,s,i1);
    and andi0(i0s,s,i0s);
    or mux(y,i0s,i1s);
endmodule