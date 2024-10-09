#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(22,3));
     {
{
auto void a();
auto void p(void (*w)());
int i;
void a() {
{
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,6), 2);
alw_write_string(alw_at(4,6), (alw_str)"BING!", 5);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
 }
void p(void (*w)()) {
{
{
{ 
             const int _start = 1;
             const int _limit = 3;
             int i = _start;
             while (i <= _limit) {
               w();

               ++i;
             }
           }
          ; /*empty*/
}
}
 }
i = 0;
p(a);
{
void _p_arg1(void) { { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,5), 2);
alw_write_string(alw_at(16,5), (alw_str)"BONG!", 5);

                 alw_Editing_restore(&_editing_state);
               }
               }
p(_p_arg1);
}
{
void _p_arg1(void) { ; /*empty*/
 }
p(_p_arg1);
}
i = 0;
{
void _p_arg1(void) { i = (i + 1);
 }
p(_p_arg1);
}
alw_assert(alw_at(22,3), (i == 3));
}
}
alw_exit(alw_at(22,3), 0);
     return 0;
   }
   
