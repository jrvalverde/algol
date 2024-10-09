#include "alw.h"

static const char * const alw_src = "Tests/standard-predefined-variables.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,4), 2);
alw_write_integer(alw_at(2,4), maxinteger);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,4), 2);
alw_write_real(alw_at(3,4), pi);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,4), 2);
alw_write_long_real(alw_at(4,4), maxreal);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,4), 2);
alw_write_real(alw_at(5,4), epsilon);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,4), 2);
alw_write_long_real(alw_at(6,4), longepsilon);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(7,0), 0);
     return 0;
   }
   
