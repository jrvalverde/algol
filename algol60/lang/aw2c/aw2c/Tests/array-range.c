#include "alw.h"

static const char * const alw_src = "Tests/array-range.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,4));
     {
const int _a_lwb1 = 1, _a_upb1 = 5;
{
auto int * a(alw_loc loc, int _sub1);
int _a_array[_a_upb1 - _a_lwb1 + 1];
int * a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return &_a_array[_sub1 - _a_lwb1];
     }
    { 
       int _sub1;
       alw_array_bounds_check(a, alw_at(2,4), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = 0;

     }
    { 
             const int _start = 1;
             const int _limit = 5;
             int i = _start;
             while (i <= _limit) {
               *a(alw_at(5,8), i) = (i * 2);

               ++i;
             }
           }
          { 
             const int _start = 1;
             const int _limit = 6;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,8), 2);
alw_write_integer(alw_at(8,8), *a(alw_at(8,14), i));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          }
}
alw_exit(alw_at(7,4), 0);
     return 0;
   }
   
