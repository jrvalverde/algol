#include "alw.h"

static const char * const alw_src = "Tests/array-bounds-empty-arrays-2.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,0));
     {
const int _a_lwb1 = 1, _a_upb1 = 2;
const int _a_lwb2 = 2, _a_upb2 = 1;
{
auto int * a(alw_loc loc, int _sub1, int _sub2);
int _a_array[_a_upb1 - _a_lwb1 + 1][_a_upb2 - _a_lwb2 + 1];
int * a(alw_loc loc, int _sub1, int _sub2) 
     {
       alw_array_range_check(a, 1);alw_array_range_check(a, 2);
       return &_a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2];
     }
    { 
       int _sub1, _sub2;
       alw_array_bounds_check(a, alw_at(2,3), 1);alw_array_bounds_check(a, alw_at(2,3), 2);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1)
for (_sub2 = _a_lwb2; _sub2 <= _a_upb2; ++_sub2) 
       _a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2] = 0;

     }
    *a(alw_at(3,3), 1, 0) = 1;
; /*empty*/
}
}
alw_exit(alw_at(4,0), 0);
     return 0;
   }
   
