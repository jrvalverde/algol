#include "alw.h"

static const char * const alw_src = "Tests/standard-analysis.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(17,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 2);
alw_write_string(alw_at(2,3), (alw_str)"sqrt(0.5)       ", 16);
alw_write_real(alw_at(2,3), alw_sqrt(alw_at(2,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 2);
alw_write_string(alw_at(3,3), (alw_str)"exp(0.5)        ", 16);
alw_write_real(alw_at(3,3), alw_exp(alw_at(3,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,3), 2);
alw_write_string(alw_at(4,3), (alw_str)"ln(0.5)         ", 16);
alw_write_real(alw_at(4,3), alw_ln(alw_at(4,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 2);
alw_write_string(alw_at(5,3), (alw_str)"log(0.5)        ", 16);
alw_write_real(alw_at(5,3), alw_log(alw_at(5,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 2);
alw_write_string(alw_at(6,3), (alw_str)"sin(0.5)        ", 16);
alw_write_real(alw_at(6,3), alw_sin(alw_at(6,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,3), 2);
alw_write_string(alw_at(7,3), (alw_str)"cos(0.5)        ", 16);
alw_write_real(alw_at(7,3), alw_cos(alw_at(7,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,3), 2);
alw_write_string(alw_at(8,3), (alw_str)"arctan(0.5)     ", 16);
alw_write_real(alw_at(8,3), alw_arctan(alw_at(8,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,3), 2);
alw_write_char(alw_at(9,3), ' ');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,3), 2);
alw_write_string(alw_at(10,3), (alw_str)"longsqrt(0.5)   ", 16);
alw_write_long_real(alw_at(10,3), alw_longsqrt(alw_at(10,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,3), 2);
alw_write_string(alw_at(11,3), (alw_str)"longexp(0.5)    ", 16);
alw_write_long_real(alw_at(11,3), alw_longexp(alw_at(11,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,3), 2);
alw_write_string(alw_at(12,3), (alw_str)"longln(0.5)     ", 16);
alw_write_long_real(alw_at(12,3), alw_longln(alw_at(12,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(13,3), 2);
alw_write_string(alw_at(13,3), (alw_str)"longlog(0.5)    ", 16);
alw_write_long_real(alw_at(13,3), alw_longlog(alw_at(13,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,3), 2);
alw_write_string(alw_at(14,3), (alw_str)"longsin(0.5)    ", 16);
alw_write_long_real(alw_at(14,3), alw_longsin(alw_at(14,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,3), 2);
alw_write_string(alw_at(15,3), (alw_str)"longcos(0.5)    ", 16);
alw_write_long_real(alw_at(15,3), alw_longcos(alw_at(15,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,3), 2);
alw_write_string(alw_at(16,3), (alw_str)"longarctan(0.5) ", 16);
alw_write_long_real(alw_at(16,3), alw_longarctan(alw_at(16,29), 0.5));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(17,0), 0);
     return 0;
   }
   
