#include "alw.h"

static const char * const alw_src = "Tests/exceptions-divzero.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(26,0));
     {
{
double r;
r = 0.0;
alw_assert(alw_at(4,2), (! *xcpnoted(alw_at(4,10), divzero)));
alw_assert(alw_at(5,2), (*xcplimit(alw_at(5,9), divzero) == 0));
alw_assert(alw_at(6,2), (*xcpaction(alw_at(6,9), divzero) == 0));
alw_assert(alw_at(7,2), *xcpmark(alw_at(7,9), divzero));
*xcplimit(alw_at(9,2), divzero) = 3;
*xcpaction(alw_at(11,2), divzero) = 0;
r = alw_rdiv(alw_at(12,10), 10, 0);
alw_assert(alw_at(13,2), (r == 10));
*xcpaction(alw_at(15,2), divzero) = 1;
r = alw_rdiv(alw_at(16,10), 10, 0);
alw_assert(alw_at(17,2), (r == maxreal));
*xcpaction(alw_at(19,2), divzero) = 2;
r = alw_rdiv(alw_at(20,10), 10, 0);
alw_assert(alw_at(21,2), (r == 0));
divzero = (void *)0;
r = alw_rdiv(alw_at(24,10), 10, 0);
alw_assert(alw_at(25,2), (r == 10));
; /*empty*/
}
}
alw_exit(alw_at(26,0), 0);
     return 0;
   }
   
