#include "alw.h"

static const char * const alw_src = "Tests/standard-read-complex.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,3));
     {
{
_Complex double c;
c = 0.0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 4);

                 alw_Editing_restore(&_editing_state);
               }
              while (1)
 {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_complex(alw_at(6,9), &c);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,9), 2);
alw_write_complex(alw_at(7,9), c);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
 
}
}
alw_exit(alw_at(4,3), 0);
     return 0;
   }
   
