#include "alw.h"

static const char * const alw_src = "Tests/operators-real-divide-by-0.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(6,0));
     {
{
double x;
double y;
x = 0.0;
y = 0.0;
x = 0.0;
y = alw_rdiv(alw_at(4,13), 1.0, x);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,4), 2);
alw_write_real(alw_at(5,4), y);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(6,0), 0);
     return 0;
   }
   
