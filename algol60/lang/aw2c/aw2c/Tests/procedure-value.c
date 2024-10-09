#include "alw.h"

static const char * const alw_src = "Tests/procedure-value.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(14,3));
     {
{
auto void p(int i1);
int i0;
void p(int i1) {
{
{
alw_assert(alw_at(5,10), (i1 == 1));
i1 = 2;
alw_assert(alw_at(7,10), (i0 == 1));
i0 = 3;
alw_assert(alw_at(9,10), (i0 == 3));
alw_assert(alw_at(10,10), (i1 == 2));
; /*empty*/
}
}
 }
i0 = 0;
i0 = 1;
p(i0);
alw_assert(alw_at(14,3), (i0 == 3));
}
}
alw_exit(alw_at(14,3), 0);
     return 0;
   }
   
