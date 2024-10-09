#include "alw.h"

static const char * const alw_src = "Tests/standard-transfer-base.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,3));
     {
{
auto void w(double x);
double r;
void w(double x) {
{
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,6), 2);
alw_write_string(alw_at(6,6), base10(x), 12);
alw_write_char(alw_at(6,6), ' ');
alw_write_string(alw_at(6,6), longbase10(x), 20);
alw_write_char(alw_at(6,6), ' ');
alw_write_string(alw_at(6,6), base16(x), 24);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
 }
r = 0.0;
w(0);
w(1);
w(10);
w(16);
w(32);
w((- 91.0e101));
w(91.0e-101);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,3), 2);
alw_write_char(alw_at(16,3), ' ');

                 alw_Editing_restore(&_editing_state);
               }
              r = 1.23456789012345;
{ 
             const int _start = 0;
             const int _limit = 10;
             int i = _start;
             while (i <= _limit) {
               {
{
w((r * alw_rpwr(alw_at(21,17), 10, i)));
w((r * alw_rpwr(alw_at(22,17), 10, (- i))));
w((- (r * alw_rpwr(alw_at(23,18), 10, i))));
w((- (r * alw_rpwr(alw_at(24,18), 10, (- i)))));
}
}

               ++i;
             }
           }
          }
}
alw_exit(alw_at(19,3), 0);
     return 0;
   }
   
