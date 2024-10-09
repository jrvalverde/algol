#include "alw.h"

static const char * const alw_src = "Tests/expressions-case-too-low.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(2,3));
     {
{
{
             int i, _i, _a[4];
             _a[0] = 1;
_a[1] = 6;
_a[2] = 0;
_a[3] = 4;

             for (_i = 0; _i < 4; ++_i) {
               i = _a[_i];
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,6), 2);
alw_write_integer(alw_at(3,6), ({ int _value = 0;
                int _selector = i;
                switch (_selector) {
                  case 1: _value = 1;
 break;
case 2: _value = 2;
 break;
case 3: _value = 3;
 break;
case 4: _value = 4;
 break;
case 5: _value = 5;
 break;
case 6: _value = 6;
 break;

                  default: alw_case_range_error(alw_at(3,12), _selector);
                } 
                _value;
             }));

                 alw_Editing_restore(&_editing_state);
               }
              
             }
           }
          }
}
alw_exit(alw_at(2,3), 0);
     return 0;
   }
   
