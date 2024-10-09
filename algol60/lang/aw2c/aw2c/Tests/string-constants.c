#include "alw.h"

static const char * const alw_src = "Tests/string-constants.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(16,4));
     {
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,4), 2);
alw_write_string(alw_at(4,4), (alw_str)" " "\xE2" "" "\xE4" "" "\xE0" "" "\xE1" "" "\xE3" "" "\xE5" "" "\xE7" "" "\xF1" "" "\xA2" ".<(+", 14);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(5,4), 2);
alw_write_string(alw_at(5,4), (alw_str)"" "\xE9" "" "\xEA" "" "\xEB" "" "\xE8" "" "\xED" "" "\xEE" "" "\xEF" "" "\xEC" "" "\xDF" "!$*);^", 15);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(6,4), 2);
alw_write_string(alw_at(6,4), (alw_str)"-/" "\xC2" "" "\xC4" "" "\xC0" "" "\xC1" "" "\xC3" "" "\xC5" "" "\xC7" "" "\xD1" "" "\xA6" ",%_>?", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,4), 2);
alw_write_string(alw_at(7,4), (alw_str)"" "\xF8" "" "\xC9" "" "\xCA" "" "\xCB" "" "\xC8" "" "\xCD" "" "\xCE" "" "\xCF" "" "\xCC" ":#@\'=", 14);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(8,4), 2);
alw_write_char(alw_at(8,4), '"');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,4), 2);
alw_write_string(alw_at(9,4), (alw_str)"" "\xD8" "abcdefghi" "\xAB" "" "\xBB" "" "\xF0" "" "\xFD" "" "\xFE" "" "\xB1" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(10,4), 2);
alw_write_string(alw_at(10,4), (alw_str)"" "\xB0" "jklmnopqr" "\xAA" "" "\xBA" "" "\xE6" "" "\xB8" "" "\xC6" "" "\xA4" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(11,4), 2);
alw_write_string(alw_at(11,4), (alw_str)"" "\xB5" "~stuvwxyz" "\xA1" "" "\xBF" "" "\xD0" "[" "\xDE" "" "\xAE" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(12,4), 2);
alw_write_string(alw_at(12,4), (alw_str)"" "\xAC" "" "\xA3" "" "\xA5" "" "\xB7" "" "\xA9" "" "\xA7" "" "\xB6" "" "\xBC" "" "\xBD" "" "\xBE" "" "\xDD" "" "\xA8" "" "\xAF" "]" "\xB4" "" "\xD7" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(13,4), 2);
alw_write_string(alw_at(13,4), (alw_str)"{ABCDEFGHI" "\xAD" "" "\xF4" "" "\xF6" "" "\xF2" "" "\xF3" "" "\xF5" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,4), 2);
alw_write_string(alw_at(14,4), (alw_str)"}JKLMNOPQR" "\xB9" "" "\xFB" "" "\xFC" "" "\xF9" "" "\xFA" "" "\xFF" "", 16);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,4), 2);
alw_write_string(alw_at(15,4), (alw_str)"" "\xF7" "STUVWXYZ" "\xB2" "" "\xD4" "" "\xD6" "" "\xD2" "" "\xD3" "" "\xD5" "", 15);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,4), 2);
alw_write_string(alw_at(16,4), (alw_str)"0123456789" "\xB3" "" "\xDB" "" "\xDC" "" "\xD9" "" "\xDA" "", 15);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(16,4), 0);
     return 0;
   }
   
