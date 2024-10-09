#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-general.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(20,0));
     {
{
auto int p(int v, int * r, int * vr, int * (*n)(void));
int i;
int r0;
int vr0;
int n0;
int p(int v, int * r, int * vr, int * (*n)(void)) {
return ({
({
v = (v + 1);
*r = (v + *vr);
*vr = (*r + v);
*n() = (*n() + v);
v;
});
});
 }
i = 0;
r0 = 0;
vr0 = 0;
n0 = 0;
vr0 = 2;
n0 = 6;
i = ({
int _p_arg2;
int _p_arg3;
int * _p_arg4(void){ return &n0; }
int _p_ret;
_p_arg2 = 0;
_p_arg3 = vr0;
_p_ret = p(1, &_p_arg2, &_p_arg3, _p_arg4);
r0 = _p_arg2;
vr0 = _p_arg3;
_p_ret;
})
;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(19,3), 2);
alw_write_integer(alw_at(19,3), i);
alw_write_integer(alw_at(19,3), r0);
alw_write_integer(alw_at(19,3), vr0);
alw_write_integer(alw_at(19,3), n0);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(20,0), 0);
     return 0;
   }
   
