#include "alw.h"

static const char * const alw_src = "Tests/string-substring-multiple-assignment.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(20,0));
     {
{
alw_chr a[2];
alw_chr b[2];
alw_chr c;
alw_str_init(a, 2);
alw_str_init(b, 2);
c = ' ';
alw_str_cpy(a, 2, alw_str_cpy(b, 2, (alw_str)"ab", 2), 2);
alw_assert(alw_at(6,3), (alw_str_cmp(a, 2, (alw_str)"ab", 2) == 0) );
alw_assert(alw_at(7,3), (alw_str_cmp(b, 2, (alw_str)"ab", 2) == 0) );
c = *alw_str_sub(alw_at(9,8), b, 2, 1, 1) = '2';
alw_assert(alw_at(10,3), (c == '2') );
alw_assert(alw_at(11,3), (alw_str_cmp(b, 2, (alw_str)"a2", 2) == 0) );
*alw_str_sub(alw_at(13,3), a, 2, 1, 1) = c = '3';
alw_assert(alw_at(14,3), (c == '3') );
alw_assert(alw_at(15,3), (alw_str_cmp(a, 2, (alw_str)"a3", 2) == 0) );
*alw_str_sub(alw_at(17,3), a, 2, 1, 1) = *alw_str_sub(alw_at(17,13), b, 2, 1, 1) = '4';
alw_assert(alw_at(18,3), (alw_str_cmp(a, 2, (alw_str)"a4", 2) == 0) );
alw_assert(alw_at(19,3), (alw_str_cmp(b, 2, (alw_str)"a4", 2) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(20,0), 0);
     return 0;
   }
   
