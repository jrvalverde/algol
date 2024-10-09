#include "alw.h"

#include <stdio.h>
#include "alwio.h"

FILE *channel3;
alw_Scanner channel3_scanner;

void initio (void)
{
    channel3 = fopen("Tests/inline-c-input-redirection.alw", "r");
    alw_Scanner_initialize(&channel3_scanner, channel3, "Tests/inline-c-input-redirection.alw");
}

void get (int channel)
{
    if (channel == 3)
        alw_active_scanner = &channel3_scanner;
    else
        alw_active_scanner = &alw_stdin_scanner;
}

static const char * const alw_src = "Tests/inline-c-input-redirection.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(45,0));
     {
{
void initio();
void get(int channel);
int i;
alw_chr s[20];
i = 0;
alw_str_init(s, 20);
initio();
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(32,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(32,15), 2);
alw_write_string(alw_at(32,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(33,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(33,15), 2);
alw_write_string(alw_at(33,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(34,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(34,15), 2);
alw_write_string(alw_at(34,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              get(3);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(37,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(37,17), 2);
alw_write_string(alw_at(37,17), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(38,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(38,17), 2);
alw_write_string(alw_at(38,17), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(39,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(39,17), 2);
alw_write_string(alw_at(39,17), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              get(7);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(42,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(42,15), 2);
alw_write_string(alw_at(42,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(43,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(43,15), 2);
alw_write_string(alw_at(43,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_read_string(alw_at(44,4), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(44,15), 2);
alw_write_string(alw_at(44,15), s, 20);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(45,0), 0);
     return 0;
   }
   
