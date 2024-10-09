#include "alw.h"

static const char * const alw_src = "Tests/array-bounds-empty-arrays.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(6,0));
     {
const int _a_lwb1 = 0, _a_upb1 = -1;
const int _b_lwb1 = -1, _b_upb1 = -2;
const int _c_lwb1 = 1, _c_upb1 = 0;
{
auto int * a(alw_loc loc, int _sub1);
auto int * b(alw_loc loc, int _sub1);
auto int * c(alw_loc loc, int _sub1);
int _a_array[_a_upb1 - _a_lwb1 + 1];
int _b_array[_b_upb1 - _b_lwb1 + 1];
int _c_array[_c_upb1 - _c_lwb1 + 1];
int * a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return &_a_array[_sub1 - _a_lwb1];
     }
    int * b(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(b, 1);
       return &_b_array[_sub1 - _b_lwb1];
     }
    int * c(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(c, 1);
       return &_c_array[_sub1 - _c_lwb1];
     }
    { 
       int _sub1;
       alw_array_bounds_check(a, alw_at(2,3), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = 0;

     }
    { 
       int _sub1;
       alw_array_bounds_check(b, alw_at(3,3), 1);
       for (_sub1 = _b_lwb1; _sub1 <= _b_upb1; ++_sub1) 
       _b_array[_sub1 - _b_lwb1] = 0;

     }
    { 
       int _sub1;
       alw_array_bounds_check(c, alw_at(4,3), 1);
       for (_sub1 = _c_lwb1; _sub1 <= _c_upb1; ++_sub1) 
       _c_array[_sub1 - _c_lwb1] = 0;

     }
    *a(alw_at(5,3), 0) = 1;
; /*empty*/
}
}
alw_exit(alw_at(6,0), 0);
     return 0;
   }
   
