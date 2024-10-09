#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-name-name.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(28,3));
     {
const int _a_lwb1 = 1, _a_upb1 = 2;
{
auto int * a(alw_loc loc, int _sub1);
auto void p(int * (*ai)(void));
auto void q(int * (*ai)(void));
int _a_array[_a_upb1 - _a_lwb1 + 1];
int i;
int * a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return &_a_array[_sub1 - _a_lwb1];
     }
    void p(int * (*ai)(void)) {
{
{
alw_assert(alw_at(8,6), (*ai() == 1));
*ai() = (*ai() * 2);
q(ai);
}
}
 }
void q(int * (*ai)(void)) {
{
{
i = (i + 1);
alw_assert(alw_at(16,6), (*ai() == 2));
*ai() = (*ai() * 2);
alw_assert(alw_at(18,6), (*ai() == 4));
; /*empty*/
}
}
 }
{ 
       int _sub1;
       alw_array_bounds_check(a, alw_at(2,3), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = 0;

     }
    i = 0;
*a(alw_at(21,3), 1) = 1;
*a(alw_at(22,3), 2) = 2;
i = 1;
{
int * _p_arg1(void){ return a(alw_at(25,5), i); }
p(_p_arg1);
}
alw_assert(alw_at(27,3), (*a(alw_at(27,10), 1) == 2));
alw_assert(alw_at(28,3), (*a(alw_at(28,10), 2) == 4));
}
}
alw_exit(alw_at(28,3), 0);
     return 0;
   }
   
