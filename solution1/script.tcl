############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lab3_hls
set_top simpleALU
add_files lab3_hls/core.cpp
add_files -tb lab3_hls/test.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xq7vx690trf1158-2i} -tool vivado
create_clock -period 10 -name default
#source "./lab3_hls/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
