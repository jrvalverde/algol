#include "alw.h"

static const char * const alw_src = "Tests/string-substring-1.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(41,3));
     {
{
auto void p(alw_str x);
auto alw_str z();
auto alw_chr q(alw_str x);
auto alw_chr r(alw_chr x);
alw_chr s[5];
alw_chr c;
void p(alw_str x) {
alw_str_cpy(x, 3, (alw_str)"xxx", 3);
 }
alw_str z() {
return alw_str_new_c(' ', 5);
 }
alw_chr q(alw_str x) {
return ({
({
alw_str_cpy_sc(x, 5, 'x');
*alw_str_sub(alw_at(11,22), x, 5, 0, 1);
});
});
 }
alw_chr r(alw_chr x) {
return ({
({
x = 'x';
*alw_str_sub(alw_at(14,22), &x, 1, 0, 1);
});
});
 }
alw_str_init(s, 5);
c = ' ';
alw_str_cpy(s, 5, (alw_str)"01234", 5);
{
alw_chr _p_arg1[3];
alw_str_cpy(_p_arg1, 3, alw_str_sub(alw_at(18,5), s, 5, 0, 3), 3);
p(_p_arg1);
}
alw_assert(alw_at(19,3), (alw_str_cmp(s, 5, (alw_str)"01234", 5) == 0) );
c = 'a';
alw_str_cpy_sc(s, 5, c);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy_sc(_q_arg1, 5, c);
_q_ret = q(_q_arg1);
_q_ret;
})
);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy(_q_arg1, 5, s, 5);
_q_ret = q(_q_arg1);
_q_ret;
})
);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy_sc(_q_arg1, 5, *alw_str_sub(alw_at(25,10), s, 5, 0, 1));
_q_ret = q(_q_arg1);
_q_ret;
})
);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy_sc(_q_arg1, 5, *alw_str_sub(alw_at(26,10), &c, 1, 0, 1));
_q_ret = q(_q_arg1);
_q_ret;
})
);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy_sc(_q_arg1, 5, ' ');
_q_ret = q(_q_arg1);
_q_ret;
})
);
alw_str_cpy_sc(s, 5, ({
alw_chr _q_arg1[5];
alw_chr _q_ret;
alw_str_cpy_sc(_q_arg1, 5, ' ');
_q_ret = q(_q_arg1);
_q_ret;
})
);
c = r(*alw_str_sub(alw_at(30,10), &c, 1, 0, 1));
c = r(c);
c = r(' ');
alw_str_cpy_sc(s, 5, r(*alw_str_sub(alw_at(33,10), &c, 1, 0, 1)));
alw_str_cpy_sc(s, 5, r(c));
alw_str_cpy_sc(s, 5, r(' '));
c = ' ';
alw_str_cpy_sc(s, 5, ' ');
alw_str_cpy_sc(s, 5, c);
alw_str_cpy(s, 5, z(), 5);
alw_str_cpy_sc(s, 5, ({
({
alw_str_cpy(s, 5, z(), 5);
' ';
});
}));
}
}
alw_exit(alw_at(41,3), 0);
     return 0;
   }
   
