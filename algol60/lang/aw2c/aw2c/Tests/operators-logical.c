#include "alw.h"

static const char * const alw_src = "Tests/operators-logical.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
alw_assert(alw_at(2,3), (1 && 1));
alw_assert(alw_at(3,3), (! (1 && 0)));
alw_assert(alw_at(4,3), (! (0 && 1)));
alw_assert(alw_at(5,3), (! (0 && 0)));
alw_assert(alw_at(7,3), (1 || 1));
alw_assert(alw_at(8,3), (1 || 0));
alw_assert(alw_at(9,3), (0 || 1));
alw_assert(alw_at(10,3), (! (0 || 0)));
alw_assert(alw_at(12,3), (! (! 1)));
alw_assert(alw_at(13,3), (! 0));
alw_assert(alw_at(15,3), (! (1 ? 0 : 1)));
alw_assert(alw_at(16,3), (0 ? 0 : 1));
{
{
int i;
i = 0;
i = 0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(21,7), 2);
alw_write_logical(alw_at(21,7), ((i > 0) && (alw_div(alw_at(21,25), 1, i) == 1)));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(22,7), 2);
alw_write_logical(alw_at(22,7), ((i == 0) || (alw_div(alw_at(22,25), 1, i) == 1)));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
