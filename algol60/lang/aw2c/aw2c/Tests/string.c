#include "alw.h"

static const char * const alw_src = "Tests/string.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(4,4));
     {
{
alw_chr s[12];
alw_str_init(s, 12);
alw_str_cpy(s, 12, (alw_str)"Hello world!", 12);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,4), 2);
alw_write_string(alw_at(4,4), s, 12);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(4,4), 0);
     return 0;
   }
   
