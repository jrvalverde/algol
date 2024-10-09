#include "alw.h"

static const char * const alw_src = "Tests/arrays-multidimensional-range.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(11,0));
     {
const int _a_lwb1 = 1, _a_upb1 = 10;
const int _a_lwb2 = 1, _a_upb2 = 10;
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
       alw_array_bounds_check(a, alw_at(2,4), 1);alw_array_bounds_check(a, alw_at(2,4), 2);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1)
for (_sub2 = _a_lwb2; _sub2 <= _a_upb2; ++_sub2) 
       _a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2] = 0;

     }
    { 
             const int _start = 1;
             const int _limit = 10;
             int i = _start;
             while (i <= _limit) {
               { 
             const int _start = 1;
             const int _limit = 10;
             int j = _start;
             while (j <= _limit) {
               *a(alw_at(6,12), i, j) = ((i * 10) + j);

               ++j;
             }
           }
          
               ++i;
             }
           }
          alw_assert(alw_at(7,4), (*a(alw_at(7,11), 1, 1) == 11));
alw_assert(alw_at(8,4), (*a(alw_at(8,11), 5, 4) == 54));
alw_assert(alw_at(9,4), (*a(alw_at(9,11), 6, 3) == 63));
alw_assert(alw_at(10,4), (*a(alw_at(10,11), 3, 11) == 0));
; /*empty*/
}
}
alw_exit(alw_at(11,0), 0);
     return 0;
   }
   
