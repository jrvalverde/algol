#include "alw.h"

static const char * const alw_src = "Tests/standard-analysis-exp.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(2,3));
     {
{
{ 
             const int _start = 700;
             const int _limit = 710;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,6), 2);
alw_write_integer(alw_at(3,6), i);
alw_write_real(alw_at(3,6), alw_exp(alw_at(3,15), i));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          }
}
alw_exit(alw_at(2,3), 0);
     return 0;
   }
   
