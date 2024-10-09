#include "alw.h"

static const char * const alw_src = "Tests/statements-for-control-variable-scope.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(17,0));
     {
{
int i;
int kk;
i = 0;
kk = 0;
i = 10;
kk = 1;
{
             const int _start = i;
             const int _step = 2;
             const int _limit = 20;
             int i = _start;
             alw_check_for_step(alw_at(9,4), _step);
             while (2 > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,6), 2);
alw_write_integer(alw_at(10,6), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          alw_assert(alw_at(11,4), (i == 10));
{ 
             const int _start = i;
             const int _limit = 12;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(13,6), 2);
alw_write_integer(alw_at(13,6), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          i = 2;
{
             const int _start = 1;
             const int _step = i;
             const int _limit = (i * 4);
             int i = _start;
             alw_check_for_step(alw_at(15,4), _step);
             while (i > 0 ? i <= _limit : i >= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,6), 2);
alw_write_integer(alw_at(16,6), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               i += _step;
             }
           }
          ; /*empty*/
}
}
alw_exit(alw_at(17,0), 0);
     return 0;
   }
   
