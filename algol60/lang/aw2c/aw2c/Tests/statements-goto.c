#include "alw.h"

static const char * const alw_src = "Tests/statements-goto.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(10,0));
     {
{
__label__ top;
__label__ bottom;
int i;
i = 0;
i = 8;
top:
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 2);
alw_write_integer(alw_at(5,3), i);

                 alw_Editing_restore(&_editing_state);
               }
              i = (i + 1);
if ((i == 12))
 goto bottom;
goto top;
bottom:
; /*empty*/
}
}
alw_exit(alw_at(10,0), 0);
     return 0;
   }
   
