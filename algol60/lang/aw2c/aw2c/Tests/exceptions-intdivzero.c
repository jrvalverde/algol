#include "alw.h"

static const char * const alw_src = "Tests/exceptions-intdivzero.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(41,2));
     {
{
alw_assert(alw_at(2,2), (! *xcpnoted(alw_at(2,10), intdivzero)));
alw_assert(alw_at(3,2), (*xcplimit(alw_at(3,9), intdivzero) == 0));
alw_assert(alw_at(4,2), (*xcpaction(alw_at(4,9), intdivzero) == 0));
alw_assert(alw_at(5,2), *xcpmark(alw_at(5,9), intdivzero));
alw_assert(alw_at(6,2), (alw_str_cmp(xcpmsg(alw_at(6,9), intdivzero), 64, (alw_str)"Integer division by zero.", 25) == 0) );
intdivzero = ({ alw_chr _field5[64];
alw_str_cpy(_field5, 64, (alw_str)"Divide by zero.", 15);
exception(alw_at(8,16), 0, 4, 1, 1, _field5); });
alw_assert(alw_at(10,2), (! *xcpnoted(alw_at(10,10), intdivzero)));
alw_assert(alw_at(11,2), (*xcplimit(alw_at(11,9), intdivzero) == 4));
alw_assert(alw_at(12,2), (*xcpaction(alw_at(12,9), intdivzero) == 1));
alw_assert(alw_at(13,2), *xcpmark(alw_at(13,9), intdivzero));
alw_assert(alw_at(14,2), (alw_str_cmp(xcpmsg(alw_at(14,9), intdivzero), 64, (alw_str)"Divide by zero.", 15) == 0) );
alw_assert(alw_at(16,2), (alw_div(alw_at(16,12), 42, 0) == 42));
alw_assert(alw_at(18,2), *xcpnoted(alw_at(18,9), intdivzero));
alw_assert(alw_at(19,2), (*xcplimit(alw_at(19,9), intdivzero) == 3));
*xcpnoted(alw_at(21,2), intdivzero) = 0;
*xcpmark(alw_at(22,2), intdivzero) = 0;
alw_assert(alw_at(23,2), (alw_div(alw_at(23,12), 42, 0) == 42));
alw_assert(alw_at(25,2), *xcpnoted(alw_at(25,9), intdivzero));
alw_assert(alw_at(26,2), (*xcplimit(alw_at(26,9), intdivzero) == 2));
alw_str_cpy(xcpmsg(alw_at(28,2), intdivzero), 64, (alw_str)"DIVIDE BY ZERO!", 15);
*xcpmark(alw_at(29,2), intdivzero) = 1;
alw_assert(alw_at(30,2), (alw_div(alw_at(30,12), 42, 0) == 42));
alw_assert(alw_at(32,2), (*xcplimit(alw_at(32,9), intdivzero) == 1));
alw_assert(alw_at(34,2), (alw_div(alw_at(34,12), 42, 0) == 42));
alw_assert(alw_at(36,2), (*xcplimit(alw_at(36,9), intdivzero) == 0));
alw_str_cpy(xcpmsg(alw_at(38,2), intdivzero), 64, (alw_str)"DIVIDE BY ZERO!!!", 17);
alw_assert(alw_at(39,2), (alw_div(alw_at(39,12), 42, 0) == 42));
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(41,2), 2);
alw_write_string(alw_at(41,2), (alw_str)"I shouldn\'t happen.", 19);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(41,2), 0);
     return 0;
   }
   
