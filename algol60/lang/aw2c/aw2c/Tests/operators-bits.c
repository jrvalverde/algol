#include "alw.h"

static const char * const alw_src = "Tests/operators-bits.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
alw_assert(alw_at(4,0), (0x1 == 0x1));
alw_assert(alw_at(5,0), (0x2 == 0x2));
alw_assert(alw_at(6,0), (0x1 != 0x0));
alw_assert(alw_at(9,0), (alw_shl(alw_at(9,18), 0x88888888, 1) == 0x11111110));
alw_assert(alw_at(10,0), (alw_shl(alw_at(10,18), 0x11111111, 0) == 0x11111111));
alw_assert(alw_at(11,0), (alw_shl(alw_at(11,18), 0x88888888, 7) == 0x44444400));
alw_assert(alw_at(12,0), (alw_shr(alw_at(12,18), 0x88888888, 0) == 0x88888888));
alw_assert(alw_at(13,0), (alw_shr(alw_at(13,18), 0x11111111, 1) == 0x08888888));
alw_assert(alw_at(14,0), (alw_shr(alw_at(14,18), 0x11111111, 7) == 0x00222222));
alw_assert(alw_at(18,0), ((0x11 | 0x11) == 0x11));
alw_assert(alw_at(19,0), ((0x11 | 0x22) == 0x33));
alw_assert(alw_at(20,0), ((0xEE & 0x77) == 0x66));
alw_assert(alw_at(22,0), ((~ 0x1001) == 0xFFFFEFFE));
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
