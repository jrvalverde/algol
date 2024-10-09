#include "alw.h"

#include <stdio.h>
#define USE_TWO

static const char * const alw_src = "Tests/inline-c.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(13,3));
     {
{
int i;
int j;
i = 0;
j = 0;
i = 1;
{

#ifdef USE_TWO
}
j = 2;
{

#else
}
j = 3;
{

#endif
}
{

printf("%03d,%03d\n", i, j);
}
}
}
alw_exit(alw_at(13,3), 0);
     return 0;
   }
   
