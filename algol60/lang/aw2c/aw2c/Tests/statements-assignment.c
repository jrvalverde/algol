#include "alw.h"

static const char * const alw_src = "Tests/statements-assignment.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(9,3));
     {
{
int i;
int j;
double r;
i = 0;
j = 0;
r = 0.0;
i = j = 42;
alw_assert(alw_at(6,3), ((i == 42) && (j == 42)));
r = j = 42;
alw_assert(alw_at(9,3), ((r == 42.0) && (j == 42)));
}
}
alw_exit(alw_at(9,3), 0);
     return 0;
   }
   
