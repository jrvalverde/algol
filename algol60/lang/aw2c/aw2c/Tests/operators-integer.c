#include "alw.h"

static const char * const alw_src = "Tests/operators-integer.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
alw_assert(alw_at(3,0), (1 == 1));
alw_assert(alw_at(4,0), (-1 == -1));
alw_assert(alw_at(6,0), ((2 + 2) == 4));
alw_assert(alw_at(7,0), ((2 - 3) == -1));
alw_assert(alw_at(8,0), ((2 * 3) == 6));
alw_assert(alw_at(9,0), (alw_div(alw_at(9,9), 8, 2) == 4));
alw_assert(alw_at(10,0), (alw_div(alw_at(10,9), 9, 2) == 4));
alw_assert(alw_at(11,0), (alw_rem(alw_at(11,9), 9, 2) == 1));
alw_assert(alw_at(12,0), (alw_rem(alw_at(12,9), 8, 2) == 0));
alw_assert(alw_at(14,0), (((1 ? 2 : 3) + 2) == 4));
alw_assert(alw_at(15,0), ((({ int _value = 0;
                int _selector = 2;
                switch (_selector) {
                  case 1: _value = 1;
 break;
case 2: _value = 2;
 break;
case 3: _value = 3;
 break;
case 4: _value = 4;
 break;
case 5: _value = 5;
 break;

                  default: alw_case_range_error(alw_at(15,7), _selector);
                } 
                _value;
             }) + 2) == 4));
alw_assert(alw_at(17,0), (entier(32.4) == 32));
alw_assert(alw_at(18,0), (entier(32.7) == 32));
alw_assert(alw_at(20,0), (alw_abs(-42) == 42));
alw_assert(alw_at(21,0), (alw_abs(42) == 42));
alw_assert(alw_at(22,0), (((double) 3) == 3.0));
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
