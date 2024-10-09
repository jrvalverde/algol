#include "alw.h"

static const char * const alw_src = "Tests/directives.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(8,3));
     {
{
alw_chr c;
c = ' ';
c = '@';
c = '!';
alw_assert(alw_at(8,3), (c == '!') );
}
}
alw_exit(alw_at(8,3), 0);
     return 0;
   }
   
