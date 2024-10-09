#include "alw.h"

static const char * const alw_src = "Tests/operators-integer-divide-by-0.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(1,0));
     { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(1,0), 2);
alw_write_integer(alw_at(1,0), alw_div(alw_at(1,8), 1, 0));

                 alw_Editing_restore(&_editing_state);
               }
              alw_exit(alw_at(1,0), 0);
     return 0;
   }
   
