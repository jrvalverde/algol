#include "alw.h"

static const char * const alw_src = "Tests/operators-bits-negative-shift.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(1,0));
     { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(1,0), 2);
alw_write_bits(alw_at(1,0), alw_shr(alw_at(1,12), 0xFFFF, -1));

                 alw_Editing_restore(&_editing_state);
               }
              alw_exit(alw_at(1,0), 0);
     return 0;
   }
   
