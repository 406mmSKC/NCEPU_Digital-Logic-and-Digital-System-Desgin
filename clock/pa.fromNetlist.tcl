
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name clock -dir "D:/New Folder/clock/planAhead_run_1" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/New Folder/clock/clock.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/New Folder/clock} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "clock.ucf" [current_fileset -constrset]
add_files [list {clock.ucf}] -fileset [get_property constrset [current_run]]
link_design
