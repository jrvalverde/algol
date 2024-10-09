#include "alw.h"

static const char * const alw_src = "Tests/expressions-if-then.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,2), 2);
alw_write_long_real(alw_at(2,2), (0 ? 1.0 : 3));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,2), 2);
alw_write_long_real(alw_at(3,2), (0 ? 4 : 3.2));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,2), 2);
alw_write_integer(alw_at(4,2), (0 ? 4 : 3));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,2), 2);
alw_write_logical(alw_at(5,2), (0 ? 0 : 1));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,2), 2);
alw_write_bits(alw_at(6,2), (0 ? 0x0FF : 0xF67E));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(7,0), 0);
     return 0;
   }
   
