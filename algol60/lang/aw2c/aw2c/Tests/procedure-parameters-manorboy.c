#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-manorboy.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(17,3));
     {
{
auto int a(int k, int (*x1)(), int (*x2)(), int (*x3)(), int (*x4)(), int (*x5)());
int a(int k, int (*x1)(), int (*x2)(), int (*x3)(), int (*x4)(), int (*x5)()) {
return ({
({
auto int b();
int b() {
return ({
({
k = (k - 1);
a(k, b, x1, x2, x3, x4);
});
});
 }
((k <= 0) ? (x4() + x5()) : b());
});
});
 }
alw_assert(alw_at(17,3), (({
int _a_arg2(void) { return 1; }
int _a_arg3(void) { return -1; }
int _a_arg4(void) { return -1; }
int _a_arg5(void) { return 1; }
int _a_arg6(void) { return 0; }
int _a_ret;
_a_ret = a(10, _a_arg2, _a_arg3, _a_arg4, _a_arg5, _a_arg6);
_a_ret;
})
 == -67));
}
}
alw_exit(alw_at(17,3), 0);
     return 0;
   }
   
