#include "alw.h"

static const char * const alw_src = "Tests/standard-read-iocontrol.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(13,0));
     {
{
int i;
i = 0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(3,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,14), 2);
alw_write_integer(alw_at(3,14), i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(4,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,14), 2);
alw_write_integer(alw_at(4,14), i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 1);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(8,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,14), 2);
alw_write_integer(alw_at(8,14), i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(9,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,14), 2);
alw_write_integer(alw_at(9,14), i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,3), 1);
alw_read_integer(alw_at(11,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,12), 2);
alw_write_integer(alw_at(11,12), i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_integer(alw_at(12,3), &i);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,14), 2);
alw_write_integer(alw_at(12,14), i);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(13,0), 0);
     return 0;
   }
   
