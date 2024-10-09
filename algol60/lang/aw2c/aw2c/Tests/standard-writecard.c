#include "alw.h"

static const char * const alw_src = "Tests/standard-writecard.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(13,2));
     {
{
int i;
alw_chr four[8];
i = 0;
alw_str_init(four, 8);
alw_str_cpy(four, 8, (alw_str)"44444444", 8);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,2), 2);
alw_write_char(alw_at(5,2), '*');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,2), 2);
alw_write_char(alw_at(6,2), '1');
alw_iocontrol(alw_at(6,2), 2);
alw_write_char(alw_at(6,2), '2');
i = 1;
alw_iocontrol(alw_at(6,2), 2);
alw_write_string(alw_at(6,2), (alw_str)"33333", 5);
alw_iocontrol(alw_at(6,2), 2);
alw_write_string(alw_at(6,2), four, 8);
alw_iocontrol(alw_at(6,2), 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,2), 2);
alw_write_char(alw_at(7,2), '*');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,2), 2);
alw_write_char(alw_at(10,2), '5');
alw_iocontrol(alw_at(10,2), 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_char(alw_at(11,2), '*');

                 alw_Editing_restore(&_editing_state);
               }
              alw_assert(alw_at(13,2), (i == 1));
}
}
alw_exit(alw_at(13,2), 0);
     return 0;
   }
   
