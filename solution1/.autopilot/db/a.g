#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/khoa/Documents/logic_design/lab3_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
