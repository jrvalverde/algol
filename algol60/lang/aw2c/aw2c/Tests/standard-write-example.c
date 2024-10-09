#include "alw.h"

static const char * const alw_src = "Tests/standard-write-example.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(15,2));
     {
{
auto void scaled(int n);
auto void aligned(int n, int d);
auto void free_point(int n);
auto void new_line();
void scaled(int n) {
{
{
r_format = 'S';
r_w = (n + 7);
}
}
 }
void aligned(int n, int d) {
{
{
r_format = 'A';
r_w = ((n + d) + 1);
r_d = d;
}
}
 }
void free_point(int n) {
{
{
r_format = 'F';
r_w = (n + 7);
}
}
 }
void new_line() {
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,22), 2);

                 alw_Editing_restore(&_editing_state);
               }
               }
free_point(5);
i_w = 2;
s_w = 1;
{
             int i, _i, _a[3];
             _a[0] = -1;
_a[1] = 0;
_a[2] = 32;

             for (_i = 0; _i < 3; ++_i) {
               i = _a[_i];
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,10), 2);
s_w = 0;
alw_write_integer(alw_at(16,10), i);
alw_write_char(alw_at(16,10), ':');
new_line();
alw_write_long_real(alw_at(16,10), alw_rdiv(alw_at(16,45), i, 3));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_string(alw_at(17,4), (alw_str)"I  ", 3);
aligned(3, 2);
alw_write_long_real(alw_at(17,4), alw_rdiv(alw_at(17,34), i, 3));
alw_write_char(alw_at(17,4), '*');
scaled(12);
alw_write_long_real(alw_at(17,4), alw_rdiv(alw_at(17,56), i, 3));
alw_write_char(alw_at(17,4), '*');

                 alw_Editing_restore(&_editing_state);
               }
              }
}

             }
           }
          }
}
alw_exit(alw_at(15,2), 0);
     return 0;
   }
   
