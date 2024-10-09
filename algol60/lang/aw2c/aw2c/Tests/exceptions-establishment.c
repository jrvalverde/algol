#include "alw.h"

static const char * const alw_src = "Tests/exceptions-establishment.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(12,3));
     {
{
alw_assert(alw_at(3,3), (unfl == (void *)0));
unfl = ({ alw_chr _field5[64];
alw_str_cpy(_field5, 64, (alw_str)"UNDERFLOW FIXED UP", 18);
exception(alw_at(5,11), 0, 10, 1, 1, _field5); });
alw_assert(alw_at(7,3), alw_is(unfl, alw_0000_exception));
alw_assert(alw_at(8,3), (! *xcpnoted(alw_at(8,11), unfl)));
alw_assert(alw_at(9,3), (*xcplimit(alw_at(9,10), unfl) == 10));
alw_assert(alw_at(10,3), (*xcpaction(alw_at(10,10), unfl) == 1));
alw_assert(alw_at(11,3), *xcpmark(alw_at(11,10), unfl));
alw_assert(alw_at(12,3), (alw_str_cmp(xcpmsg(alw_at(12,10), unfl), 64, (alw_str)"UNDERFLOW FIXED UP", 18) == 0) );
}
}
alw_exit(alw_at(12,3), 0);
     return 0;
   }
   
