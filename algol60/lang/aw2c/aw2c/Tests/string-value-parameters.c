#include "alw.h"

static const char * const alw_src = "Tests/string-value-parameters.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,0));
     {
{
auto void p(alw_str u);
auto void q(alw_str v);
alw_chr s[12];
alw_chr d[40];
void p(alw_str u) {
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,7), 2);
alw_write_char(alw_at(6,7), '"');
alw_write_string(alw_at(6,7), u, 40);
alw_write_char(alw_at(6,7), '"');

                 alw_Editing_restore(&_editing_state);
               }
               }
void q(alw_str v) {
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,7), 2);
alw_write_char(alw_at(9,7), '"');
alw_write_string(alw_at(9,7), v, 20);
alw_write_char(alw_at(9,7), '"');

                 alw_Editing_restore(&_editing_state);
               }
               }
alw_str_init(s, 12);
alw_str_init(d, 40);
alw_str_cpy(s, 12, (alw_str)"Hello world!", 12);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,4), 2);
alw_write_string(alw_at(12,4), s, 12);

                 alw_Editing_restore(&_editing_state);
               }
              alw_str_cpy(d, 40, s, 12);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,4), 2);
alw_write_string(alw_at(15,4), d, 40);

                 alw_Editing_restore(&_editing_state);
               }
              {
alw_chr _p_arg1[40];
alw_str_cpy(_p_arg1, 40, s, 12);
p(_p_arg1);
}
{
alw_chr _p_arg1[40];
alw_str_cpy(_p_arg1, 40, d, 40);
p(_p_arg1);
}
{
alw_chr _q_arg1[20];
alw_str_cpy(_q_arg1, 20, s, 12);
q(_q_arg1);
}
; /*empty*/
}
}
alw_exit(alw_at(19,0), 0);
     return 0;
   }
   
