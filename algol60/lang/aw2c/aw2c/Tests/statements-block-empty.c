#include "alw.h"

static const char * const alw_src = "Tests/statements-block-empty.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(2,0));
     {
{
; /*empty*/
}
}
alw_exit(alw_at(2,0), 0);
     return 0;
   }
   
