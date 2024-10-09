#include "alw.h"

static const char * const alw_src = "Tests/standard-read-exception-null.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(15,2));
     {
{
alw_chr s[5];
int i;
double r;
_Complex double c;
int l;
unsigned int b;
alw_str_init(s, 5);
i = 0;
r = 0.0;
c = 0.0;
l = 0;
b = 0;
endfile = (void *)0;
{ 
             const int _start = 1;
             const int _limit = 6;
             int counter = _start;
             while (counter <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,9), 1);
alw_read_string(alw_at(12,9), s, 5);
alw_read_integer(alw_at(12,9), &i);
alw_read_real(alw_at(12,9), &r);
alw_read_complex(alw_at(12,9), &c);
alw_read_logical(alw_at(12,9), &l);
alw_read_bits(alw_at(12,9), &b);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(13,9), 2);
alw_write_string(alw_at(13,9), s, 5);
alw_write_integer(alw_at(13,9), i);
alw_write_real(alw_at(13,9), r);
alw_write_complex(alw_at(13,9), c);
alw_write_logical(alw_at(13,9), l);
alw_write_bits(alw_at(13,9), b);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++counter;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,2), 2);
alw_write_string(alw_at(15,2), (alw_str)"(end)", 5);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(15,2), 0);
     return 0;
   }
   
