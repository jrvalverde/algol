#include "alw.h"

static const char * const alw_src = "Tests/standard-readcard-exception-null.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,2));
     {
{
alw_chr s[5];
alw_str_init(s, 5);
endfile = (void *)0;
{ 
             const int _start = 1;
             const int _limit = 10;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(6,9), s, 5);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,9), 2);
alw_write_char(alw_at(7,9), '"');
alw_write_string(alw_at(7,9), s, 5);
alw_write_char(alw_at(7,9), '"');

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          }
}
alw_exit(alw_at(4,2), 0);
     return 0;
   }
   
