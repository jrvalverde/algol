#include "alw.h"

static const char * const alw_src = "Tests/statements-block.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(15,0));
     {
{
int i;
int j;
i = 0;
j = 0;
i = 1;
j = 1;
{
{
int i;
i = 0;
alw_assert(alw_at(7,7), (j == 1));
i = 2;
j = 2;
alw_assert(alw_at(10,7), (i == 2));
alw_assert(alw_at(11,7), (j == 2));
; /*empty*/
}
}
alw_assert(alw_at(13,4), (i == 1));
alw_assert(alw_at(14,4), (j == 2));
; /*empty*/
}
}
alw_exit(alw_at(15,0), 0);
     return 0;
   }
   
