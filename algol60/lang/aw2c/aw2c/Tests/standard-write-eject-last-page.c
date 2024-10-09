#include "alw.h"

static const char * const alw_src = "Tests/standard-write-eject-last-page.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(6,3));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 10014);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 20005);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,3), 40005);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 40011);

                 alw_Editing_restore(&_editing_state);
               }
              { 
             const int _start = 1;
             const int _limit = 6;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,6), 2);
alw_write_integer(alw_at(7,6), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          }
}
alw_exit(alw_at(6,3), 0);
     return 0;
   }
   
