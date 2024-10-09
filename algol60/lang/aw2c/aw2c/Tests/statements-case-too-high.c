#include "alw.h"

static const char * const alw_src = "Tests/statements-case-too-high.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(2,3));
     {
{
{
             int i, _i, _a[3];
             _a[0] = 1;
_a[1] = 6;
_a[2] = 7;

             for (_i = 0; _i < 3; ++_i) {
               i = _a[_i];
               { 
             const int _selector = i;
             switch (_selector) {
             case 1: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,9), 2);
alw_write_integer(alw_at(5,9), 1);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;
case 2: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,9), 2);
alw_write_integer(alw_at(6,9), 2);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;
case 3: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,9), 2);
alw_write_integer(alw_at(7,9), 3);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;
case 4: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,9), 2);
alw_write_integer(alw_at(8,9), 4);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;
case 5: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,9), 2);
alw_write_integer(alw_at(9,9), 5);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;
case 6: { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,9), 2);
alw_write_integer(alw_at(10,9), 6);

                 alw_Editing_restore(&_editing_state);
               }
              ; break;

             default: alw_case_range_error(alw_at(3,6), _selector);
             }
           }
          
             }
           }
          }
}
alw_exit(alw_at(2,3), 0);
     return 0;
   }
   
