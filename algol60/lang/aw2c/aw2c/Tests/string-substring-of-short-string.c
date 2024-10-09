#include "alw.h"

static const char * const alw_src = "Tests/string-substring-of-short-string.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(14,2));
     {
{
alw_chr a[6];
alw_chr b[6];
alw_str_init(a, 6);
alw_str_init(b, 6);
alw_str_cpy(a, 6, (alw_str)"01", 2);
alw_assert(alw_at(10,2), (alw_str_cmp(alw_str_sub(alw_at(10,9), a, 6, 2, 2), 2, (alw_str)"  ", 2) == 0) );
alw_str_cpy(b, 6, (alw_str)"01", 2);
alw_str_cpy(alw_str_sub(alw_at(13,2), b, 6, 3, 2), 2, (alw_str)"xx", 2);
alw_assert(alw_at(14,2), (alw_str_cmp(b, 6, (alw_str)"01 xx ", 6) == 0) );
}
}
alw_exit(alw_at(14,2), 0);
     return 0;
   }
   
