#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-hendrik.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(31,3));
     {
const int _a_lwb1 = 1, _a_upb1 = 2;
{
auto int * a(alw_loc loc, int _sub1);
auto void p(int * ai);
int _a_array[_a_upb1 - _a_lwb1 + 1];
int i;
int * a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return &_a_array[_sub1 - _a_lwb1];
     }
    void p(int * ai) {
{
{
*ai = (*ai + 1);
i = 2;
; /*empty*/
}
}
 }
{ 
       int _sub1;
       alw_array_bounds_check(a, alw_at(11,3), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = 0;

     }
    i = 0;
*a(alw_at(23,3), 1) = 2;
*a(alw_at(24,3), 2) = 4;
i = 1;
{
int _p_arg1;
_p_arg1 = *a(alw_at(28,5), i);
p(&_p_arg1);
*a(alw_at(28,5), i) = _p_arg1;
}
alw_assert(alw_at(30,3), (*a(alw_at(30,10), 1) == 2));
alw_assert(alw_at(31,3), (*a(alw_at(31,10), 2) == 3));
}
}
alw_exit(alw_at(31,3), 0);
     return 0;
   }
   
