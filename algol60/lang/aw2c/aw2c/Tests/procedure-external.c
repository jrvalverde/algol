#include "alw.h"

static const char * const alw_src = "Tests/procedure-external.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(17,3));
     {
{
void p1(int * i);


#define p2 P2
int p2(double r);

#define p3(r,s) ((r) + (s))
auto void p4(int r, int s);


 void p4 (int r, int s) {} 
alw_assert(alw_at(17,3), 1);
}
}
alw_exit(alw_at(17,3), 0);
     return 0;
   }
   
