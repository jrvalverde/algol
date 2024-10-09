#include "alw.h"

static const char * const alw_src = "Tests/program-exit-code-statement.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(2,3));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 2);
alw_write_integer(alw_at(2,3), (2 + 2));

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(2,3), 0);
     return 0;
   }
   
