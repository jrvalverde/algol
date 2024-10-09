#include "alw.h"

static const char * const alw_src = "Tests/statements-for-step.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(10,4));
     {
{
int i;
i = 0;
i = 42;
{
             const int _start = 1;
             const int _step = 2;
             const int _limit = 8;
             int i = _start;
             alw_check_for_step(alw_at(4,4), _step);
             while (2 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,8), 2);
alw_write_integer(alw_at(5,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          {
             const int _start = 8;
             const int _step = -2;
             const int _limit = 1;
             int i = _start;
             alw_check_for_step(alw_at(6,4), _step);
             while (-2 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,8), 2);
alw_write_integer(alw_at(7,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          {
             const int _start = 1;
             const int _step = -2;
             const int _limit = 8;
             int i = _start;
             alw_check_for_step(alw_at(8,4), _step);
             while (-2 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,8), 2);
alw_write_integer(alw_at(9,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          alw_assert(alw_at(10,4), (i == 42));
}
}
alw_exit(alw_at(10,4), 0);
     return 0;
   }
   
