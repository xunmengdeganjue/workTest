/*tysrv.lds*/
  
SECTIONS {
    . = ALIGN(4);
    __TY_DEFINE_CMD_ST_start = .;
    .ty_print_struct : {*(.my_cmd_struct)}
    __TY_DEFINE_CMD_ST_end = .;
}

INSERT AFTER .data
