#include "alw.h"

static const char * const alw_src = "Tests/statements-goto-scope.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
__label__ top;
__label__ bottom;
__label__ exit;
int i;
i = 0;
i = 1;
top:
{
{
__label__ top;
__label__ bottom;
int j;
int k;
j = 0;
k = 0;
j = 1;
top:
k = ((10 * i) + j);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,6), 2);
alw_write_integer(alw_at(11,6), k);

                 alw_Editing_restore(&_editing_state);
               }
              j = (j + 1);
if ((j == 4))
 goto bottom;
if ((k == 32))
 goto exit;
goto top;
bottom:
; /*empty*/
}
}
i = (i + 1);
if ((i == 4))
 goto bottom;
goto top;
bottom:
exit:
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
