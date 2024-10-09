#include "alw.h"

static const char * const alw_src = "Tests/operators-string-substring.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(12,3));
     {
const int _a_lwb1 = 1, _a_upb1 = 2;
{
auto alw_str a(alw_loc loc, int _sub1);
alw_chr s[6];
alw_chr _a_array[_a_upb1 - _a_lwb1 + 1][6];
alw_str a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return _a_array[_sub1 - _a_lwb1];
     }
    alw_str_init(s, 6);
{ 
       int _sub1;
       alw_array_bounds_check(a, alw_at(3,3), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       alw_str_init(_a_array[_sub1 - _a_lwb1], 6);

     }
    alw_str_cpy(a(alw_at(5,3), 1), 6, (alw_str)"abcdef", 6);
alw_assert(alw_at(6,3), (alw_str_cmp(alw_str_sub(alw_at(6,10), a(alw_at(6,10), 1), 6, 0, 3), 3, (alw_str)"abc", 3) == 0) );
alw_str_cpy(s, 6, (alw_str)"012345", 6);
alw_str_cpy(alw_str_sub(alw_at(8,3), s, 6, 2, 3), 3, alw_str_sub(alw_at(8,13), a(alw_at(8,13), 1), 6, 0, 3), 3);
alw_assert(alw_at(9,3), (alw_str_cmp(s, 6, (alw_str)"01abc5", 6) == 0) );
alw_str_cpy(alw_str_sub(alw_at(11,3), a(alw_at(11,3), 1), 6, 0, 2), 2, alw_str_sub(alw_at(11,16), s, 6, 4, 2), 2);
alw_assert(alw_at(12,3), (alw_str_cmp(a(alw_at(12,10), 1), 6, (alw_str)"c5cdef", 6) == 0) );
}
}
alw_exit(alw_at(12,3), 0);
     return 0;
   }
   
