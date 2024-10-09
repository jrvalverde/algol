#include "alw.h"

static const char * const alw_src = "Tests/statements-for-step-0.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,0));
     {
{
{
             const int _start = 1;
             const int _step = 0;
             const int _limit = 8;
             int i = _start;
             alw_check_for_step(alw_at(2,4), _step);
             while (0 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,8), 2);
alw_write_integer(alw_at(3,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          ; /*empty*/
}
}
alw_exit(alw_at(4,0), 0);
     return 0;
   }
   
