# 
# Synthesis run script generated by Vivado
# 

create_project -in_memory -part xc7z020clg484-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /home/andrew/ece527/mp1/part3/axi_interface_simple.cache/wt [current_project]
set_property parent.project_path /home/andrew/ece527/mp1/part3/axi_interface_simple.xpr [current_project]
set_property XPM_LIBRARIES XPM_CDC [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part em.avnet.com:zed:part0:1.3 [current_project]
set_property ip_output_repo /home/andrew/ece527/mp1/part3/axi_interface_simple.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/imports/hdl/axi_switch_wrapper.v
add_files /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/axi_switch.bd
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_processing_system7_0_1/axi_switch_processing_system7_0_1.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_axi_gpio_0_0/axi_switch_axi_gpio_0_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_axi_gpio_0_0/axi_switch_axi_gpio_0_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_axi_gpio_0_0/axi_switch_axi_gpio_0_0.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_rst_ps7_0_100M_0/axi_switch_rst_ps7_0_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_rst_ps7_0_100M_0/axi_switch_rst_ps7_0_100M_0.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_rst_ps7_0_100M_0/axi_switch_rst_ps7_0_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/ip/axi_switch_auto_pc_0/axi_switch_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/axi_switch_ooc.xdc]
set_property is_locked true [get_files /home/andrew/ece527/mp1/part3/axi_interface_simple.srcs/sources_1/bd/axi_switch/axi_switch.bd]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]

synth_design -top axi_switch_wrapper -part xc7z020clg484-1


write_checkpoint -force -noxdef axi_switch_wrapper.dcp

catch { report_utilization -file axi_switch_wrapper_utilization_synth.rpt -pb axi_switch_wrapper_utilization_synth.pb }
