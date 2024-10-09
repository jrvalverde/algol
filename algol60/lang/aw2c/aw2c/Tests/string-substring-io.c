#include "alw.h"

static const char * const alw_src = "Tests/string-substring-io.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(7,0));
     {
{
alw_chr s[8];
alw_str_init(s, 8);
alw_str_cpy(s, 8, (alw_str)"01234567", 8);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(4,3), alw_str_sub(alw_at(4,12), s, 8, 2, 4), 4);

                 alw_Editing_restore(&_editing_state);
               }
              alw_assert(alw_at(5,3), (alw_str_cmp(s, 8, (alw_str)"01abcd67", 8) == 0) );
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,3), 2);
alw_write_string(alw_at(6,3), alw_str_sub(alw_at(6,9), s, 8, 1, 6), 6);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(7,0), 0);
     return 0;
   }
   
