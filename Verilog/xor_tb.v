#! /c/Source/iverilog-install/bin/vvp
:ivl_version "12.0 (devel)" "(s20150603-1539-g2693dd32b)";
:ivl_delay_selection "TYPICAL";
:vpi_time_precision + 0;
:vpi_module "C:\iverilog\lib\ivl\system.vpi";
:vpi_module "C:\iverilog\lib\ivl\vhdl_sys.vpi";
:vpi_module "C:\iverilog\lib\ivl\vhdl_textio.vpi";
:vpi_module "C:\iverilog\lib\ivl\v2005_math.vpi";
:vpi_module "C:\iverilog\lib\ivl\va_math.vpi";
S_0000023b212161b0 .scope module, "hello" "hello" 2 1;
 .timescale 0 0;
    .port_info 0 /INPUT 1 "A";
    .port_info 1 /OUTPUT 1 "B";
o0000023b21254cc8 .functor BUFZ 1, C4<z>; HiZ drive
L_0000023b212167e0 .functor NOT 1, o0000023b21254cc8, C4<0>, C4<0>, C4<0>;
v0000023b21216340_0 .net "A", 0 0, o0000023b21254cc8;  0 drivers
v0000023b212163e0_0 .net "B", 0 0, L_0000023b212167e0;  1 drivers
# The file index is used to find the file name in the following table.
:file_names 3;
    "N/A";
    "<interactive>";
    "hello.v";
