#include "alw.h"

static const char * const alw_src = "Tests/string-comparisions.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
alw_assert(alw_at(2,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"abc", 3) == 0) );
alw_assert(alw_at(3,3), (alw_str_cmp((alw_str)"bce", 3, (alw_str)"abc", 3) > 0) );
alw_assert(alw_at(4,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"bce", 3) < 0) );
alw_assert(alw_at(6,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"abcd", 4) != 0) );
alw_assert(alw_at(7,3), (alw_str_cmp((alw_str)"abcd", 4, (alw_str)"abc", 3) > 0) );
alw_assert(alw_at(8,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"abcd", 4) < 0) );
alw_assert(alw_at(13,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"abc ", 4) == 0) );
alw_assert(alw_at(14,3), (alw_str_cmp((alw_str)"bce ", 4, (alw_str)"abc", 3) > 0) );
alw_assert(alw_at(15,3), (alw_str_cmp((alw_str)"abc ", 4, (alw_str)"bce", 3) < 0) );
alw_assert(alw_at(16,3), (alw_str_cmp((alw_str)"bce", 3, (alw_str)"abc ", 4) > 0) );
alw_assert(alw_at(17,3), (alw_str_cmp((alw_str)"abc", 3, (alw_str)"bce ", 4) < 0) );
alw_assert(alw_at(19,3), (alw_str_cmp((alw_str)"abc ", 4, (alw_str)"abc  ", 5) == 0) );
alw_assert(alw_at(20,3), (alw_str_cmp((alw_str)"bce  ", 5, (alw_str)"abc ", 4) > 0) );
alw_assert(alw_at(21,3), (alw_str_cmp((alw_str)"abc  ", 5, (alw_str)"bce ", 4) < 0) );
alw_assert(alw_at(22,3), (alw_str_cmp((alw_str)"bce ", 4, (alw_str)"abc  ", 5) > 0) );
alw_assert(alw_at(23,3), (alw_str_cmp((alw_str)"abc ", 4, (alw_str)"bce  ", 5) < 0) );
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
