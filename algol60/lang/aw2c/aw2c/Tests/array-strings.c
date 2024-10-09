#include "alw.h"

static const char * const alw_src = "Tests/array-strings.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(13,0));
     {
const int _a_lwb1 = 1, _a_upb1 = 6;
const int _a_lwb2 = 1, _a_upb2 = 6;
{
auto alw_str a(alw_loc loc, int _sub1, int _sub2);
alw_chr _a_array[_a_upb1 - _a_lwb1 + 1][_a_upb2 - _a_lwb2 + 1][5];
alw_str a(alw_loc loc, int _sub1, int _sub2) 
     {
       alw_array_range_check(a, 1);alw_array_range_check(a, 2);
       return _a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2];
     }
    { 
       int _sub1, _sub2;
       alw_array_bounds_check(a, alw_at(2,3), 1);alw_array_bounds_check(a, alw_at(2,3), 2);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1)
for (_sub2 = _a_lwb2; _sub2 <= _a_upb2; ++_sub2) 
       alw_str_init(_a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2], 5);

     }
    { 
             const int _start = 1;
             const int _limit = 6;
             int i = _start;
             while (i <= _limit) {
               { 
             const int _start = 1;
             const int _limit = 6;
             int j = _start;
             while (j <= _limit) {
               alw_assert(alw_at(6,10), (alw_str_cmp_sc(a(alw_at(6,17), i, j), 5, ' ') == 0) );

               ++j;
             }
           }
          
               ++i;
             }
           }
          alw_str_cpy(a(alw_at(8,3), 3, 4), 5, (alw_str)"abcbe", 5);
alw_str_cpy(a(alw_at(9,3), 3, 5), 5, (alw_str)"ABCBE", 5);
alw_assert(alw_at(11,3), (alw_str_cmp(a(alw_at(11,10), 3, 4), 5, (alw_str)"abcbe", 5) == 0) );
alw_assert(alw_at(12,3), (alw_str_cmp(a(alw_at(12,10), 3, 5), 5, (alw_str)"ABCBE", 5) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(13,0), 0);
     return 0;
   }
   
