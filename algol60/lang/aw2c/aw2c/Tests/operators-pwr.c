#include "alw.h"

static const char * const alw_src = "Tests/operators-pwr.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,0));
     {
{
_Complex double x;
x = 0.0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,4), 2);
alw_write_long_real(alw_at(4,4), alw_rpwr(alw_at(4,12), 0, 0));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,4), 2);
alw_write_long_real(alw_at(5,4), alw_rpwr(alw_at(5,12), 1, 0));
alw_write_long_real(alw_at(5,4), alw_rpwr(alw_at(5,20), 1, 1));
alw_write_long_real(alw_at(5,4), alw_rpwr(alw_at(5,28), 1, 2));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,4), 2);
alw_write_long_real(alw_at(6,4), alw_rpwr(alw_at(6,12), 1, 0));
alw_write_long_real(alw_at(6,4), alw_rpwr(alw_at(6,20), 1, 1));
alw_write_long_real(alw_at(6,4), alw_rpwr(alw_at(6,28), 1, 2));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,4), 2);
alw_write_char(alw_at(7,4), ' ');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,4), 2);
alw_write_long_real(alw_at(9,4), alw_rpwr(alw_at(9,14), 0.0, 0));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,4), 2);
alw_write_long_real(alw_at(10,4), alw_rpwr(alw_at(10,15), 10.0, 0));
alw_write_long_real(alw_at(10,4), alw_rpwr(alw_at(10,27), 10.0, 1));
alw_write_long_real(alw_at(10,4), alw_rpwr(alw_at(10,38), 10.0, 2));
alw_write_long_real(alw_at(10,4), alw_rpwr(alw_at(10,51), 10.0, 20));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,4), 2);
alw_write_long_real(alw_at(11,4), alw_rpwr(alw_at(11,15), 10.0, 0));
alw_write_long_real(alw_at(11,4), alw_rpwr(alw_at(11,26), 10.0, -1));
alw_write_long_real(alw_at(11,4), alw_rpwr(alw_at(11,38), 10.0, -2));
alw_write_long_real(alw_at(11,4), alw_rpwr(alw_at(11,50), 10.0, -20));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,4), 2);
alw_write_char(alw_at(12,4), ' ');

                 alw_Editing_restore(&_editing_state);
               }
              x = (7 - 4.0i);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,4), 2);
alw_write_long_complex(alw_at(15,4), alw_cpwr(alw_at(15,12), x, 0));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,4), 2);
alw_write_long_complex(alw_at(16,4), alw_cpwr(alw_at(16,12), x, 1));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(17,4), 2);
alw_write_long_complex(alw_at(17,4), alw_cpwr(alw_at(17,12), x, 2));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(18,4), 2);
alw_write_long_complex(alw_at(18,4), alw_cpwr(alw_at(18,12), x, 20));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(19,0), 0);
     return 0;
   }
   
