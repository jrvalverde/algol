#include "alw.h"

static const char * const alw_src = "Tests/inline-c-expressions.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(6,0));
     {
{
int i;
i = 0;
i = 4;
i = 

i * 2
;
alw_assert(alw_at(5,3), (i == 8));
; /*empty*/
}
}
alw_exit(alw_at(6,0), 0);
     return 0;
   }
   
