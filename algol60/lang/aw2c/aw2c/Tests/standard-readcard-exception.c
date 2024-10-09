#include "alw.h"

static const char * const alw_src = "Tests/standard-readcard-exception.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(11,2));
     {
{
alw_chr s[5];
alw_str_init(s, 5);
*xcplimit(alw_at(3,2), endfile) = 3;
*xcpmark(alw_at(4,2), endfile) = 0;
alw_str_cpy(xcpmsg(alw_at(5,2), endfile), 64, (alw_str)"Expected more lines on the input.", 33);
{ 
             const int _start = 1;
             const int _limit = 10;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(8,9), s, 5);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,9), 2);
alw_write_char(alw_at(9,9), '"');
alw_write_string(alw_at(9,9), s, 5);
alw_write_char(alw_at(9,9), '"');

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,2), 2);
alw_write_string(alw_at(11,2), (alw_str)"You shouldn\'t see this.", 23);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(11,2), 0);
     return 0;
   }
   
