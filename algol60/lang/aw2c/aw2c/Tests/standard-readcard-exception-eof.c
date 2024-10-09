#include "alw.h"

static const char * const alw_src = "Tests/standard-readcard-exception-eof.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(14,2));
     {
{
alw_chr s[5];
alw_str_init(s, 5);
*xcplimit(alw_at(4,2), endfile) = 1;
*xcpmark(alw_at(5,2), endfile) = 0;
while (({
({
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(8,9), s, 5);

                 alw_Editing_restore(&_editing_state);
               }
              (! *xcpnoted(alw_at(9,10), endfile));
});
}))
 { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,5), 2);
alw_write_char(alw_at(12,5), '"');
alw_write_string(alw_at(12,5), s, 5);
alw_write_char(alw_at(12,5), '"');

                 alw_Editing_restore(&_editing_state);
               }
               
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,2), 2);
alw_write_string(alw_at(14,2), (alw_str)"(eof)", 5);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(14,2), 0);
     return 0;
   }
   
