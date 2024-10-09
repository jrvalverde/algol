#include "alw.h"

static const char * const alw_src = "Tests/standard-read-real.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(3,3));
     {
{
double r;
r = 0.0;
while (1)
 {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_real(alw_at(5,9), &r);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,9), 2);
alw_write_real(alw_at(6,9), r);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
 
}
}
alw_exit(alw_at(3,3), 0);
     return 0;
   }
   
