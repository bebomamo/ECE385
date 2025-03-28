transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/test_memory.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/synchronizers.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/SLC3_2.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/regfile.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/Reg_cc.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/Reg_16.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/pcmux.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/Mem2IO.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/mdrmux.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/marmux.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/ISDU.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/HexDriver.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/datapath.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/conditioncode.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/alu.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/slc3.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/memory_contents.sv}
vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/slc3_testtop.sv}

vlog -sv -work work +incdir+C:/ece385_summer23/lab4 {C:/ece385_summer23/lab4/testbench.sv}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L fiftyfivenm_ver -L rtl_work -L work -voptargs="+acc"  testbench

add wave *
view structure
view signals
run 10 ns
