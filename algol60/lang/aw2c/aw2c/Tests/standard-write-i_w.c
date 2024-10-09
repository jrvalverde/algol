#include "alw.h"

static const char * const alw_src = "Tests/standard-write-i_w.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(17,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 2);
i_w = 0;
alw_write_integer(alw_at(2,3), 1);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 2);
i_w = 1;
alw_write_integer(alw_at(3,3), 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,3), 2);
i_w = 2;
alw_write_integer(alw_at(4,3), 3);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 2);
i_w = 3;
alw_write_integer(alw_at(5,3), 4);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 2);
alw_write_integer(alw_at(6,3), 5);

                 alw_Editing_restore(&_editing_state);
               }
              i_w = 3;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,3), 2);
alw_write_integer(alw_at(8,3), 6);

                 alw_Editing_restore(&_editing_state);
               }
              i_w = 1;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,3), 2);
alw_write_integer(alw_at(10,3), 7);
alw_write_integer(alw_at(10,3), 8);
alw_write_integer(alw_at(10,3), 9);

                 alw_Editing_restore(&_editing_state);
               }
              s_w = 0;
i_w = 3;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(13,3), 2);
alw_write_integer(alw_at(13,3), 10);
alw_write_integer(alw_at(13,3), 11);
alw_write_integer(alw_at(13,3), 12);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,3), 2);
i_w = -5;
alw_write_integer(alw_at(14,3), 13);
alw_write_integer(alw_at(14,3), 14);
alw_write_integer(alw_at(14,3), 15);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,3), 2);
alw_write_integer(alw_at(15,3), 16);
alw_write_integer(alw_at(15,3), 17);
alw_write_integer(alw_at(15,3), 18);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_integer(alw_at(16,3), 19);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(17,0), 0);
     return 0;
   }
   
