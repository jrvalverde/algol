#include "alw.h"

static const char * const alw_src = "Tests/standard-write-line-wrap.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(27,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,2), 5);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,2), 40005);

                 alw_Editing_restore(&_editing_state);
               }
              s_w = 0;
i_w = 1;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,2), 10001);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,2), 20001);

                 alw_Editing_restore(&_editing_state);
               }
              { 
             const int _start = 1;
             const int _limit = 4;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_integer(alw_at(13,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,2), 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(17,2), 10002);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(18,2), 20002);

                 alw_Editing_restore(&_editing_state);
               }
              { 
             const int _start = 1;
             const int _limit = 8;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_integer(alw_at(21,8), i);

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(23,2), 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(24,2), 20003);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_string(alw_at(25,2), (alw_str)"ab", 2);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_string(alw_at(26,2), (alw_str)"cd", 2);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(27,0), 0);
     return 0;
   }
   
