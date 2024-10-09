#include "alw.h"

static const char * const alw_src = "Tests/statements-for-list.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(8,4));
     {
{
int i;
i = 0;
i = 42;
{
             int i, _i, _a[1];
             _a[0] = 5;

             for (_i = 0; _i < 1; ++_i) {
               i = _a[_i];
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,8), 2);
alw_write_integer(alw_at(5,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
             }
           }
          {
             int i, _i, _a[4];
             _a[0] = 1;
_a[1] = 2;
_a[2] = 4;
_a[3] = 8;

             for (_i = 0; _i < 4; ++_i) {
               i = _a[_i];
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,8), 2);
alw_write_integer(alw_at(7,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
             }
           }
          alw_assert(alw_at(8,4), (i == 42));
}
}
alw_exit(alw_at(8,4), 0);
     return 0;
   }
   
