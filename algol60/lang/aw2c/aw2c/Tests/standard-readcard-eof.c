#include "alw.h"

static const char * const alw_src = "Tests/standard-readcard-eof.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(3,3));
     {
{
alw_chr card[80];
alw_str_init(card, 80);
{ 
             const int _start = 1;
             const int _limit = 4;
             int i = _start;
             while (i <= _limit) {
               {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(5,9), card, 80);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,9), 2);
alw_write_string(alw_at(6,9), card, 80);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}

               ++i;
             }
           }
          }
}
alw_exit(alw_at(3,3), 0);
     return 0;
   }
   
