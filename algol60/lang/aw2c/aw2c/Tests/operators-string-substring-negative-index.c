#include "alw.h"

static const char * const alw_src = "Tests/operators-string-substring-negative-index.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(5,4));
     {
{
alw_chr s6[6];
alw_str_init(s6, 6);
alw_str_cpy(s6, 6, (alw_str)"012345", 6);
{
             const int _start = 4;
             const int _step = -1;
             const int _limit = -1;
             int i = _start;
             alw_check_for_step(alw_at(5,4), _step);
             while (-1 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,7), 2);
alw_write_string(alw_at(6,7), alw_str_sub(alw_at(6,13), s6, 6, i, 2), 2);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          }
}
alw_exit(alw_at(5,4), 0);
     return 0;
   }
   
