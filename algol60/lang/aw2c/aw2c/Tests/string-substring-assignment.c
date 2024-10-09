#include "alw.h"

static const char * const alw_src = "Tests/string-substring-assignment.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(15,0));
     {
{
alw_chr s[10];
alw_str_init(s, 10);
alw_str_cpy(s, 10, (alw_str)"0123456789", 10);
alw_str_cpy(alw_str_sub(alw_at(5,3), s, 10, 4, 3), 3, (alw_str)"abc", 3);
alw_assert(alw_at(6,3), (alw_str_cmp(s, 10, (alw_str)"0123abc789", 10) == 0) );
alw_str_cpy(alw_str_sub(alw_at(7,3), s, 10, 0, 3), 3, (alw_str)"___", 3);
alw_assert(alw_at(8,3), (alw_str_cmp(s, 10, (alw_str)"___3abc789", 10) == 0) );
alw_str_cpy(alw_str_sub(alw_at(9,3), s, 10, 6, 4), 4, (alw_str)"????", 4);
alw_assert(alw_at(10,3), (alw_str_cmp(s, 10, (alw_str)"___3ab????", 10) == 0) );
alw_str_cpy(s, 10, (alw_str)"0123456789", 10);
alw_str_cpy(alw_str_sub(alw_at(13,3), s, 10, 3, 5), 5, (alw_str)"ab", 2);
alw_assert(alw_at(14,3), (alw_str_cmp(s, 10, (alw_str)"012ab   89", 10) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(15,0), 0);
     return 0;
   }
   
