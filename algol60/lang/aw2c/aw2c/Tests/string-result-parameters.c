#include "alw.h"

static const char * const alw_src = "Tests/string-result-parameters.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(18,3));
     {
{
auto alw_str p(alw_str v, alw_str r, alw_str vr, alw_str (n)(void));
alw_chr s[4];
alw_chr r0[4];
alw_chr vr0[4];
alw_chr n0[4];
alw_str p(alw_str v, alw_str r, alw_str vr, alw_str (n)(void)) {
return alw_str_new(({
({
alw_str_cpy(alw_str_sub(alw_at(7,6), r, 4, 0, 2), 2, alw_str_sub(alw_at(7,16), v, 4, 0, 2), 2);
alw_str_cpy(alw_str_sub(alw_at(8,6), r, 4, 2, 2), 2, alw_str_sub(alw_at(8,16), vr, 4, 0, 2), 2);
alw_str_cpy(alw_str_sub(alw_at(9,6), n(), 4, 0, 2), 2, alw_str_sub(alw_at(9,16), v, 4, 0, 2), 2);
alw_str_cpy(vr, 4, n(), 4);
vr;
});
}), 4, 4);
 }
alw_str_init(s, 4);
alw_str_init(r0, 4);
alw_str_init(vr0, 4);
alw_str_init(n0, 4);
alw_str_cpy(vr0, 4, (alw_str)"VVVV", 4);
alw_str_cpy(n0, 4, (alw_str)"nnnn", 4);
alw_str_cpy(s, 4, ({
alw_chr _p_arg1[4];
alw_chr _p_arg2[4];
alw_chr _p_arg3[4];
alw_str _p_arg4(void){ return n0; }
alw_str _p_ret;
alw_str_cpy(_p_arg1, 4, (alw_str)"vvvv", 4);
alw_str_init(_p_arg2, 4);
alw_str_cpy(_p_arg3, 4, vr0, 4);
_p_ret = p(_p_arg1, _p_arg2, _p_arg3, _p_arg4);
alw_str_cpy(r0, 4, _p_arg2, 4);
alw_str_cpy(vr0, 4, _p_arg3, 4);
_p_ret;
})
, 4);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(18,3), 2);
alw_write_string(alw_at(18,3), s, 4);
alw_write_string(alw_at(18,3), r0, 4);
alw_write_string(alw_at(18,3), vr0, 4);
alw_write_string(alw_at(18,3), n0, 4);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(18,3), 0);
     return 0;
   }
   
