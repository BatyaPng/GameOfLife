runapp:
  XOR x0 x0 x0
  ADDI x22 x0 512
  ADDI x23 x0 256
  ADDI x30 x0 192
  ADDI x15 x0 30
  BR x0 main_loop

main_loop:
  ADDI x7 x7 30
  ADDI x16 x16 1
  SETLT x1 x16 x15
  BR x1 exit

loop_background:
  FLUSH
  XOR x12 x12 x12
  BR x0 loop_y

loop_y:
  XOR x13 x13 x13
  BR x0 loop_x

loop_x:
  PUT_PIXEL x12 x13 0
  ADDI x13 x13 1
  SETEQ x1 x13 x23
  BR x1 loop_x

inc_y:
  ADDI x12 x12 1
  SETEQ x1 x12 x22
  BR x1 loop_y
 
loop_app_pixel_y:
  ADDI x9 x0 160
  BR x0 loop_app_pixel_x

loop_app_pixel_x:
  PUT_PIXEL x9 x8 99999999 
  ADDI x9 x9 1
  SETEQ x1 x9 x30
  BR x1 loop_app_pixel_x

inc_app_pixel_y:
  ADDI x8 x8 1
  SETEQ x1 x8 x7
  BR x1 loop_app_pixel_y

cont_main_loop:
  BR x0 main_loop

exit:
  EXIT
