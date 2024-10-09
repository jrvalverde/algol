#include "alw.h"

static const char * const alw_src = "Tests/standard-read-integer.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(8,3));
     {
{
int i;
int j;
int k;
i = 0;
j = 0;
k = 0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 1);
alw_read_integer(alw_at(3,3), &i);
alw_read_integer(alw_at(3,3), &j);
alw_read_integer(alw_at(3,3), &k);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,3), 2);
alw_write_integer(alw_at(4,3), i);
alw_write_integer(alw_at(4,3), j);
alw_write_integer(alw_at(4,3), k);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 1);
alw_read_integer(alw_at(5,3), &i);
alw_read_integer(alw_at(5,3), &j);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 2);
alw_write_integer(alw_at(6,3), i);
alw_write_integer(alw_at(6,3), j);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(7,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,3), 2);
alw_write_integer(alw_at(8,3), i);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(8,3), 0);
     return 0;
   }
   
