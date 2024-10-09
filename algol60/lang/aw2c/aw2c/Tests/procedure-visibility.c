#include "alw.h"

static const char * const alw_src = "Tests/procedure-visibility.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(8,2));
     {
{
auto void p1();
auto void p2();
unsigned int b;
int i;
void p1() {
{
{
p2();
}
}
 }
void p2() {
{
{
i = 42;
}
}
 }
b = 0;
i = 0;
p1();
alw_assert(alw_at(8,2), (i == 42));
}
}
alw_exit(alw_at(8,2), 0);
     return 0;
   }
   
