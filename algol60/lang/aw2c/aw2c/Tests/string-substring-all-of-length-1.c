#include "alw.h"

static const char * const alw_src = "Tests/string-substring-all-of-length-1.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,3));
     {
{
alw_chr s[10];
alw_str_init(s, 10);
alw_str_cpy(s, 10, (alw_str)"0123456789", 10);
{ 
             const int _start = 0;
             const int _limit = 9;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,7), 2);
alw_write_char(alw_at(5,7), *alw_str_sub(alw_at(5,13), s, 10, i, 1));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          }
}
alw_exit(alw_at(4,3), 0);
     return 0;
   }
   
