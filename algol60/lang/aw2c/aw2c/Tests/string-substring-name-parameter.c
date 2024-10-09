#include "alw.h"

static const char * const alw_src = "Tests/string-substring-name-parameter.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(18,3));
     {
{
auto void p(alw_str (x)(void));
alw_chr s[8];
int i;
void p(alw_str (x)(void)) {
{
{
alw_assert(alw_at(7,6), (alw_str_cmp(x(), 4, (alw_str)"0123", 4) == 0) );
i = 1;
alw_assert(alw_at(9,6), (alw_str_cmp(x(), 4, (alw_str)"1234", 4) == 0) );
i = 2;
alw_str_cpy(x(), 4, (alw_str)"abcd", 4);
alw_assert(alw_at(12,6), (alw_str_cmp(x(), 4, (alw_str)"abcd", 4) == 0) );
alw_assert(alw_at(13,6), (alw_str_cmp(s, 8, (alw_str)"01abcd67", 8) == 0) );
}
}
 }
alw_str_init(s, 8);
i = 0;
alw_str_cpy(s, 8, (alw_str)"01234567", 8);
i = 0;
{
alw_str _p_arg1(void){ return alw_str_sub(alw_at(18,5), s, 8, i, 4); }
p(_p_arg1);
}
}
}
alw_exit(alw_at(18,3), 0);
     return 0;
   }
   
