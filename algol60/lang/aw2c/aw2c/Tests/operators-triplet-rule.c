#include "alw.h"

static const char * const alw_src = "Tests/operators-triplet-rule.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,0));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(2,3), 2);
alw_write_long_real(alw_at(2,3), alw_rdiv(alw_at(2,11), 3, 7));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(3,3), 2);
alw_write_long_real(alw_at(3,3), alw_rdiv(alw_at(3,11), 3, 7.0));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,3), 2);
alw_write_long_real(alw_at(4,3), alw_rdiv(alw_at(4,13), 3.0, 7));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,3), 2);
alw_write_long_complex(alw_at(5,3), alw_cdiv(alw_at(5,12), 3.0i, 7));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 2);
alw_write_complex(alw_at(6,3), alw_cdiv(alw_at(6,12), 3.0i, 7.0));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(7,0), 0);
     return 0;
   }
   
