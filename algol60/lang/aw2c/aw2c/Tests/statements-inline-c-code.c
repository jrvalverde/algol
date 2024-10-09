#include "alw.h"

static const char * const alw_src = "Tests/statements-inline-c-code.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,0));
     {
{
int i;
int j;
int k;
i = 0;
j = 0;
k = 0;
i = 1;
j = 2;
{

 k = i + j; /* How did that go? */ 
}
alw_assert(alw_at(6,3), (k == 3));
; /*empty*/
}
}
alw_exit(alw_at(7,0), 0);
     return 0;
   }
   
