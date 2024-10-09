#include "alw.h"

static const char * const alw_src = "Tests/expressions-if-then-string-expressions.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,0));
     {
{
alw_chr s5[5];
alw_chr s2[2];
alw_chr s1;
alw_chr c;
int b;
alw_str_init(s5, 5);
alw_str_init(s2, 2);
s1 = ' ';
c = ' ';
b = 0;
alw_str_cpy(s2, 2, (alw_str)"ab", 2);
c = 'x';
alw_str_cpy(s5, 5, ({ alw_str _value = alw_str_var(2);
 if (1) alw_str_cpy(_value, 2, s2, 2);
 else alw_str_cpy(_value, 2, (alw_str)"  ", 2);
 _value; }), 2);
alw_assert(alw_at(10,38), (alw_str_cmp(s5, 5, (alw_str)"ab   ", 5) == 0) );
alw_str_cpy(s5, 5, ({ alw_str _value = alw_str_var(2);
 if (0) alw_str_cpy(_value, 2, s2, 2);
 else alw_str_cpy(_value, 2, (alw_str)"cd", 2);
 _value; }), 2);
alw_assert(alw_at(11,38), (alw_str_cmp(s5, 5, (alw_str)"cd   ", 5) == 0) );
alw_str_cpy(s5, 5, ({ alw_str _value = alw_str_var(2);
 if (1) alw_str_cpy(_value, 2, s2, 2);
 else alw_str_cpy_sc(_value, 2, ' ');
 _value; }), 2);
alw_assert(alw_at(12,38), (alw_str_cmp(s5, 5, (alw_str)"ab   ", 5) == 0) );
alw_str_cpy(s5, 5, ({ alw_str _value = alw_str_var(2);
 if (0) alw_str_cpy(_value, 2, s2, 2);
 else alw_str_cpy_sc(_value, 2, 'c');
 _value; }), 2);
alw_assert(alw_at(13,38), (alw_str_cmp(s5, 5, (alw_str)"c    ", 5) == 0) );
alw_str_cpy(s5, 5, ({ alw_str _value = alw_str_var(2);
 if (0) alw_str_cpy(_value, 2, s2, 2);
 else alw_str_cpy_sc(_value, 2, c);
 _value; }), 2);
alw_assert(alw_at(14,38), (alw_str_cmp(s5, 5, (alw_str)"x    ", 5) == 0) );
s1 = (1 ? 't' : *alw_str_sub(alw_at(16,33), s2, 2, 0, 1));
alw_assert(alw_at(16,42), (s1 == 't') );
s1 = (0 ? 'c' : *alw_str_sub(alw_at(17,33), s2, 2, 0, 1));
alw_assert(alw_at(17,42), (s1 == 'a') );
s1 = (1 ? c : *alw_str_sub(alw_at(18,33), s2, 2, 0, 1));
alw_assert(alw_at(18,42), (s1 == 'x') );
; /*empty*/
}
}
alw_exit(alw_at(19,0), 0);
     return 0;
   }
   
