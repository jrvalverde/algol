#include "alw.h"

static const char * const alw_src = "Tests/constants-range.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(10,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,2), 2);
alw_write_integer(alw_at(2,2), 0);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,2), 2);
alw_write_integer(alw_at(3,2), -0);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,2), 2);
alw_write_integer(alw_at(4,2), 1);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,2), 2);
alw_write_integer(alw_at(5,2), -1);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,2), 2);
alw_write_integer(alw_at(6,2), 2147483647);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,2), 2);
alw_write_integer(alw_at(7,2), (-2147483647 - 1));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,2), 2);
alw_write_bits(alw_at(8,2), 0x0);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,2), 2);
alw_write_bits(alw_at(9,2), 0xFFFFFFFF);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(10,0), 0);
     return 0;
   }
   
