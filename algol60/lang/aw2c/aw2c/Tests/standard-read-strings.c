#include "alw.h"

static const char * const alw_src = "Tests/standard-read-strings.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(3,3));
     {
{
alw_chr s[3];
alw_str_init(s, 3);
while (1)
 {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(5,10), s, 3);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,10), 2);
alw_write_char(alw_at(6,10), '\'');
alw_write_string(alw_at(6,10), s, 3);
alw_write_string(alw_at(6,10), (alw_str)"\' ", 2);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
 
}
}
alw_exit(alw_at(3,3), 0);
     return 0;
   }
   
