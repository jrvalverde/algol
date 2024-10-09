#include "alw.h"

static const char * const alw_src = "Tests/string-substring-assignment-off-end.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(5,0));
     {
{
alw_chr s[10];
alw_str_init(s, 10);
alw_str_cpy(s, 10, (alw_str)"0123456789", 10);
alw_str_cpy(alw_str_sub(alw_at(4,3), s, 10, 8, 3), 3, (alw_str)"abc", 3);
; /*empty*/
}
}
alw_exit(alw_at(5,0), 0);
     return 0;
   }
   
