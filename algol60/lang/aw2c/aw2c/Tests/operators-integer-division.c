#include "alw.h"

static const char * const alw_src = "Tests/operators-integer-division.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(22,0));
     {
{
auto int sgn(int a);
auto int d(int a, int b);
int sgn(int a) {
return ((a < 0) ? -1 : 1);
 }
int d(int a, int b) {
return ((a < b) ? 0 : (d((a - b), b) + 1));
 }
{
             int a, _i, _a[5];
             _a[0] = 91;
_a[1] = 10;
_a[2] = 0;
_a[3] = -13;
_a[4] = -10;

             for (_i = 0; _i < 5; ++_i) {
               a = _a[_i];
               {
             int b, _i, _a[4];
             _a[0] = 43;
_a[1] = 5;
_a[2] = -5;
_a[3] = -10;

             for (_i = 0; _i < 4; ++_i) {
               b = _a[_i];
               alw_assert(alw_at(13,6), (alw_div(alw_at(13,15), a, b) == (sgn((a * b)) * d(alw_abs(a), alw_abs(b)))));

             }
           }
          
             }
           }
          {
             int a, _i, _a[5];
             _a[0] = 91;
_a[1] = 10;
_a[2] = 0;
_a[3] = -13;
_a[4] = -10;

             for (_i = 0; _i < 5; ++_i) {
               a = _a[_i];
               {
             int b, _i, _a[4];
             _a[0] = 43;
_a[1] = 5;
_a[2] = -5;
_a[3] = -10;

             for (_i = 0; _i < 4; ++_i) {
               b = _a[_i];
               alw_assert(alw_at(20,6), (alw_rem(alw_at(20,15), a, b) == (a - (alw_div(alw_at(20,31), a, b) * b))));

             }
           }
          
             }
           }
          ; /*empty*/
}
}
alw_exit(alw_at(22,0), 0);
     return 0;
   }
   
