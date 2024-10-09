#include "alw.h"

static const char * const alw_src = "Tests/standard-transfer.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(68,0));
     {
{
alw_assert(alw_at(2,2), (truncate(2.3) == 2));
alw_assert(alw_at(3,2), (truncate(2.5) == 2));
alw_assert(alw_at(4,2), (truncate(2.7) == 2));
alw_assert(alw_at(5,2), (truncate((- 2.3)) == -2));
alw_assert(alw_at(6,2), (truncate((- 2.5)) == -2));
alw_assert(alw_at(7,2), (truncate((- 2.7)) == -2));
alw_assert(alw_at(9,2), (entier(2.3) == 2));
alw_assert(alw_at(10,2), (entier(2.5) == 2));
alw_assert(alw_at(11,2), (entier(2.7) == 2));
alw_assert(alw_at(12,2), (entier((- 2.3)) == -3));
alw_assert(alw_at(13,2), (entier((- 2.5)) == -3));
alw_assert(alw_at(14,2), (entier((- 2.7)) == -3));
alw_assert(alw_at(16,2), (round_(2.3) == 2));
alw_assert(alw_at(17,2), (round_(2.5) == 3));
alw_assert(alw_at(18,2), (round_(2.7) == 3));
alw_assert(alw_at(19,2), (round_((- 2.3)) == -2));
alw_assert(alw_at(20,2), (round_((- 2.5)) == -3));
alw_assert(alw_at(21,2), (round_((- 2.7)) == -3));
alw_assert(alw_at(23,2), (roundtoreal(2.3) == 2.0));
alw_assert(alw_at(24,2), (roundtoreal(2.5) == 3.0));
alw_assert(alw_at(25,2), (roundtoreal(2.7) == 3.0));
alw_assert(alw_at(26,2), (roundtoreal((- 2.3)) == (- 2.0)));
alw_assert(alw_at(27,2), (roundtoreal((- 2.5)) == (- 3.0)));
alw_assert(alw_at(28,2), (roundtoreal((- 2.7)) == (- 3.0)));
alw_assert(alw_at(30,2), odd_(3));
alw_assert(alw_at(31,2), (! odd_(2)));
alw_assert(alw_at(32,2), odd_(1));
alw_assert(alw_at(33,2), (! odd_(0)));
alw_assert(alw_at(34,2), odd_(-1));
alw_assert(alw_at(36,2), (number(0x0) == 0));
alw_assert(alw_at(37,2), (number(0x1) == 1));
alw_assert(alw_at(38,2), (number(0x7FFFFFFF) == 2147483647));
alw_assert(alw_at(39,2), (number(0x7FFFFFFF) == maxinteger));
alw_assert(alw_at(40,2), (number(0xFFFFFFFF) == -1));
alw_assert(alw_at(42,2), (bitstring(0) == 0x0));
alw_assert(alw_at(43,2), (bitstring(1) == 0x1));
alw_assert(alw_at(44,2), (bitstring(-1) == 0xFFFFFFFF));
alw_assert(alw_at(45,2), (bitstring(2147483647) == 0x7FFFFFFF));
alw_assert(alw_at(46,2), (bitstring(maxinteger) == 0x7FFFFFFF));
alw_assert(alw_at(48,2), (decode(' ') == 64));
alw_assert(alw_at(49,2), (decode('"') == 127));
alw_assert(alw_at(50,2), (decode('~') == 161));
alw_assert(alw_at(51,2), (code(64) == ' ') );
alw_assert(alw_at(52,2), (code(127) == '"') );
alw_assert(alw_at(53,2), (code(161) == '~') );
alw_assert(alw_at(55,2), (alw_str_cmp(intbase10(0), 12, (alw_str)" +0000000000", 12) == 0) );
alw_assert(alw_at(56,2), (alw_str_cmp(intbase10(1), 12, (alw_str)" +0000000001", 12) == 0) );
alw_assert(alw_at(57,2), (alw_str_cmp(intbase10(-1), 12, (alw_str)" -0000000001", 12) == 0) );
alw_assert(alw_at(58,2), (alw_str_cmp(intbase10(2147483647), 12, (alw_str)" +2147483647", 12) == 0) );
alw_assert(alw_at(59,2), (alw_str_cmp(intbase10(-2147483647), 12, (alw_str)" -2147483647", 12) == 0) );
alw_assert(alw_at(63,2), (alw_str_cmp(intbase16(0), 12, (alw_str)"    00000000", 12) == 0) );
alw_assert(alw_at(64,2), (alw_str_cmp(intbase16(1), 12, (alw_str)"    00000001", 12) == 0) );
alw_assert(alw_at(65,2), (alw_str_cmp(intbase16(-1), 12, (alw_str)"    FFFFFFFF", 12) == 0) );
alw_assert(alw_at(66,2), (alw_str_cmp(intbase16(2147483647), 12, (alw_str)"    7FFFFFFF", 12) == 0) );
alw_assert(alw_at(67,2), (alw_str_cmp(intbase16(-2147483647), 12, (alw_str)"    80000001", 12) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(68,0), 0);
     return 0;
   }
   
