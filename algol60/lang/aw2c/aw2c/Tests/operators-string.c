#include "alw.h"

static const char * const alw_src = "Tests/operators-string.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(30,0));
     {
{
alw_chr s3[3];
alw_chr s6[6];
alw_chr s6_2[6];
alw_str_init(s3, 3);
alw_str_init(s6, 6);
alw_str_init(s6_2, 6);
alw_assert(alw_at(5,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"zzz", 3) < 0) );
alw_assert(alw_at(6,3), (alw_str_cmp((alw_str)"zzz", 3, (alw_str)"aaa", 3) > 0) );
alw_assert(alw_at(7,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"zzz", 3) <= 0) );
alw_assert(alw_at(8,3), (alw_str_cmp((alw_str)"zzz", 3, (alw_str)"aaa", 3) >= 0) );
alw_assert(alw_at(9,3), (alw_str_cmp((alw_str)"zzz", 3, (alw_str)"aaa", 3) != 0) );
alw_assert(alw_at(10,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"aaa", 3) == 0) );
alw_assert(alw_at(11,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"aaa", 3) >= 0) );
alw_assert(alw_at(12,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"aaa", 3) <= 0) );
alw_assert(alw_at(13,3), (alw_str_cmp((alw_str)"aaa", 3, (alw_str)"aaaa", 4) < 0) );
alw_assert(alw_at(14,3), (alw_str_cmp((alw_str)"aaaa", 4, (alw_str)"aaa", 3) > 0) );
alw_assert(alw_at(15,3), (alw_str_cmp((alw_str)"aaaa", 4, (alw_str)"aaa", 3) != 0) );
alw_str_cpy(s6, 6, (alw_str)"012345", 6);
alw_str_cpy(s3, 3, alw_str_sub(alw_at(19,9), s6, 6, 0, 3), 3);
alw_assert(alw_at(19,19), (alw_str_cmp(s3, 3, (alw_str)"012", 3) == 0) );
alw_str_cpy(s3, 3, alw_str_sub(alw_at(20,9), s6, 6, 1, 3), 3);
alw_assert(alw_at(20,19), (alw_str_cmp(s3, 3, (alw_str)"123", 3) == 0) );
alw_str_cpy(s3, 3, alw_str_sub(alw_at(21,9), s6, 6, 2, 3), 3);
alw_assert(alw_at(21,19), (alw_str_cmp(s3, 3, (alw_str)"234", 3) == 0) );
alw_str_cpy(s3, 3, alw_str_sub(alw_at(22,9), s6, 6, 3, 3), 3);
alw_assert(alw_at(22,19), (alw_str_cmp(s3, 3, (alw_str)"345", 3) == 0) );
alw_str_cpy(s6, 6, alw_str_sub(alw_at(24,9), s6, 6, 4, 2), 2);
alw_assert(alw_at(24,19), (alw_str_cmp(s6, 6, (alw_str)"45    ", 6) == 0) );
alw_str_cpy(s6, 6, (alw_str)"12", 2);
alw_str_cpy(s6_2, 6, (alw_str)"12    ", 6);
alw_assert(alw_at(28,3), (alw_str_cmp(s6, 6, s6_2, 6) == 0) );
alw_assert(alw_at(29,3), (alw_str_cmp(s6_2, 6, s6, 6) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(30,0), 0);
     return 0;
   }
   
