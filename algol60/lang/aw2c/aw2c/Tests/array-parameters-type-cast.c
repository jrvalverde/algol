#include "alw.h"

static const char * const alw_src = "Tests/array-parameters-type-cast.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(12,0));
     {
const int _i_lwb1 = 1, _i_upb1 = 2;
{
auto void p(double * a(alw_loc,int), int n);
auto double * i(alw_loc loc, int _sub1);
double _i_array[_i_upb1 - _i_lwb1 + 1];
double * i(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(i, 1);
       return &_i_array[_sub1 - _i_lwb1];
     }
    void p(double * a(alw_loc,int), int n) {
{ 
             const int _start = 1;
             const int _limit = n;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_real(alw_at(4,9), *a(alw_at(4,17), i));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
           }
{ 
       int _sub1;
       alw_array_bounds_check(i, alw_at(6,3), 1);
       for (_sub1 = _i_lwb1; _sub1 <= _i_upb1; ++_sub1) 
       _i_array[_sub1 - _i_lwb1] = 0.0;

     }
    *i(alw_at(8,3), 1) = 1;
*i(alw_at(9,3), 2) = 3;
p(i, 2);
; /*empty*/
}
}
alw_exit(alw_at(12,0), 0);
     return 0;
   }
   
