#include "alw.h"

static const char * const alw_src = "Tests/arrays-multidimensional.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,0));
     {
const int _a_lwb1 = 1, _a_upb1 = 10;
const int _a_lwb2 = 1, _a_upb2 = 10;
const int _b_lwb1 = 1, _b_upb1 = 10;
const int _b_lwb2 = 1, _b_upb2 = 10;
const int _b_lwb3 = 1, _b_upb3 = 10;
{
auto int * a(alw_loc loc, int _sub1, int _sub2);
auto int * b(alw_loc loc, int _sub1, int _sub2, int _sub3);
int _a_array[_a_upb1 - _a_lwb1 + 1][_a_upb2 - _a_lwb2 + 1];
int _b_array[_b_upb1 - _b_lwb1 + 1][_b_upb2 - _b_lwb2 + 1][_b_upb3 - _b_lwb3 + 1];
int * a(alw_loc loc, int _sub1, int _sub2) 
     {
       alw_array_range_check(a, 1);alw_array_range_check(a, 2);
       return &_a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2];
     }
    int * b(alw_loc loc, int _sub1, int _sub2, int _sub3) 
     {
       alw_array_range_check(b, 1);alw_array_range_check(b, 2);alw_array_range_check(b, 3);
       return &_b_array[_sub1 - _b_lwb1][_sub2 - _b_lwb2][_sub3 - _b_lwb3];
     }
    { 
       int _sub1, _sub2;
       alw_array_bounds_check(a, alw_at(2,4), 1);alw_array_bounds_check(a, alw_at(2,4), 2);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1)
for (_sub2 = _a_lwb2; _sub2 <= _a_upb2; ++_sub2) 
       _a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2] = 0;

     }
    { 
       int _sub1, _sub2, _sub3;
       alw_array_bounds_check(b, alw_at(3,4), 1);alw_array_bounds_check(b, alw_at(3,4), 2);alw_array_bounds_check(b, alw_at(3,4), 3);
       for (_sub1 = _b_lwb1; _sub1 <= _b_upb1; ++_sub1)
for (_sub2 = _b_lwb2; _sub2 <= _b_upb2; ++_sub2)
for (_sub3 = _b_lwb3; _sub3 <= _b_upb3; ++_sub3) 
       _b_array[_sub1 - _b_lwb1][_sub2 - _b_lwb2][_sub3 - _b_lwb3] = 0;

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
               *a(alw_at(7,12), i, j) = ((i * 10) + j);

               ++j;
             }
           }
          
               ++i;
             }
           }
          alw_assert(alw_at(8,4), (*a(alw_at(8,11), 1, 1) == 11));
alw_assert(alw_at(9,4), (*a(alw_at(9,11), 5, 4) == 54));
alw_assert(alw_at(10,4), (*a(alw_at(10,11), 6, 3) == 63));
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
               { 
             const int _start = 1;
             const int _limit = 10;
             int k = _start;
             while (k <= _limit) {
               *b(alw_at(15,16), i, j, k) = (((i * 100) + (j * 10)) + k);

               ++k;
             }
           }
          
               ++j;
             }
           }
          
               ++i;
             }
           }
          alw_assert(alw_at(16,4), (*b(alw_at(16,11), 1, 1, 1) == 111));
alw_assert(alw_at(17,4), (*b(alw_at(17,11), 5, 4, 6) == 546));
alw_assert(alw_at(18,4), (*b(alw_at(18,11), 6, 3, 9) == 639));
; /*empty*/
}
}
alw_exit(alw_at(19,0), 0);
     return 0;
   }
   
