#include "alw.h"

static const char * const alw_src = "Tests/statements-while.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,4));
     {
{
int i;
i = 0;
i = 1;
while ((i <= 5))
 {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,10), 2);
alw_write_integer(alw_at(6,10), i);

                 alw_Editing_restore(&_editing_state);
               }
              i = (i + 1);
}
}
 
}
}
alw_exit(alw_at(4,4), 0);
     return 0;
   }
   
