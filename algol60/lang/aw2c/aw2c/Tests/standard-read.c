#include "alw.h"

static const char * const alw_src = "Tests/standard-read.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(37,0));
     {
{
alw_chr s[3];
int a;
int b;
unsigned int x;
int n;
double r;
_Complex double c;
alw_str_init(s, 3);
a = 0;
b = 0;
x = 0;
n = 0;
r = 0.0;
c = 0.0;
{ 
             const int _start = 1;
             const int _limit = 6;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(11,10), s, 3);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,10), 2);
alw_write_char(alw_at(12,10), '\'');
alw_write_string(alw_at(12,10), s, 3);
alw_write_string(alw_at(12,10), (alw_str)"\' ", 2);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,3), 1);
alw_read_logical(alw_at(14,3), &a);
alw_read_logical(alw_at(14,3), &b);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,3), 2);
alw_write_logical(alw_at(15,3), a);
alw_write_logical(alw_at(15,3), b);

                 alw_Editing_restore(&_editing_state);
               }
              { 
             const int _start = 1;
             const int _limit = 4;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_bits(alw_at(18,10), &x);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(19,10), 2);
alw_write_bits(alw_at(19,10), x);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          { 
             const int _start = 1;
             const int _limit = 5;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(23,10), &n);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(24,10), 2);
alw_write_integer(alw_at(24,10), n);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          { 
             const int _start = 1;
             const int _limit = 8;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_real(alw_at(28,10), &r);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(29,10), 2);
alw_write_real(alw_at(29,10), r);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          { 
             const int _start = 1;
             const int _limit = 2;
             int i = _start;
             while (i <= _limit) {
               { 
             const int _start = 1;
             const int _limit = 8;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_complex(alw_at(34,12), &c);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(35,12), 2);
alw_write_complex(alw_at(35,12), c);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          
               ++i;
             }
           }
          ; /*empty*/
}
}
alw_exit(alw_at(37,0), 0);
     return 0;
   }
   
