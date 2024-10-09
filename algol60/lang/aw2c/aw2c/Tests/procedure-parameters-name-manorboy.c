#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-name-manorboy.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(18,3));
     {
{
auto int a(int k, int * (*x1)(void), int * (*x2)(void), int * (*x3)(void), int * (*x4)(void), int * (*x5)(void));
int a(int k, int * (*x1)(void), int * (*x2)(void), int * (*x3)(void), int * (*x4)(void), int * (*x5)(void)) {
return ({
({
auto int b();
int b() {
return ({
({
k = (k - 1);
({
int _a_arg2_temp;
int * _a_arg2(void){ _a_arg2_temp = b();
; return &_a_arg2_temp; }
int _a_ret;
_a_ret = a(k, _a_arg2, x1, x2, x3, x4);
_a_ret;
})
;
});
});
 }
((k <= 0) ? (*x4() + *x5()) : b());
});
});
 }
alw_assert(alw_at(18,3), (({
int _a_arg2_temp;
int * _a_arg2(void){ _a_arg2_temp = 1;
; return &_a_arg2_temp; }
int _a_arg3_temp;
int * _a_arg3(void){ _a_arg3_temp = -1;
; return &_a_arg3_temp; }
int _a_arg4_temp;
int * _a_arg4(void){ _a_arg4_temp = -1;
; return &_a_arg4_temp; }
int _a_arg5_temp;
int * _a_arg5(void){ _a_arg5_temp = 1;
; return &_a_arg5_temp; }
int _a_arg6_temp;
int * _a_arg6(void){ _a_arg6_temp = 0;
; return &_a_arg6_temp; }
int _a_ret;
_a_ret = a(10, _a_arg2, _a_arg3, _a_arg4, _a_arg5, _a_arg6);
_a_ret;
})
 == -67));
}
}
alw_exit(alw_at(18,3), 0);
     return 0;
   }
   
