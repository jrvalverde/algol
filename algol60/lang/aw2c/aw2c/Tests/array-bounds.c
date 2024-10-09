#include "alw.h"

static const char * const alw_src = "Tests/array-bounds.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(18,0));
     {
{
int i;
i = 0;
i = 5;
while ((i >= -1))
 {
const int _a_lwb1 = 1, _a_upb1 = i;
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
       alw_array_bounds_check(a, alw_at(10,12), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = 0;

     }
    if ((i > 0))
 {
{
*a(alw_at(13,20), 1) = i;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,20), 2);
alw_write_integer(alw_at(14,20), *a(alw_at(14,26), 1));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
i = (i - 1);
}
}
 
; /*empty*/
}
}
alw_exit(alw_at(18,0), 0);
     return 0;
   }
   
