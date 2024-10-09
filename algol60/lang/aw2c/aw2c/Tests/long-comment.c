#include "alw.h"

static const char * const alw_src = "Tests/long-comment.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(8,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 2);
alw_write_char(alw_at(2,3), '1');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,3), 2);
alw_write_char(alw_at(7,3), '4');

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(8,0), 0);
     return 0;
   }
   
