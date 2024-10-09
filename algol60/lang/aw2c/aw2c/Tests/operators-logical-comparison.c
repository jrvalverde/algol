#include "alw.h"

static const char * const alw_src = "Tests/operators-logical-comparison.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(19,0));
     {
{
alw_assert(alw_at(5,0), (((1) != 0)  == ((1) != 0)));
alw_assert(alw_at(6,0), (((0) != 0)  == ((0) != 0)));
alw_assert(alw_at(8,0), (((1) != 0)  != ((0) != 0)));
alw_assert(alw_at(9,0), (((0) != 0)  != ((1) != 0)));
alw_assert(alw_at(11,0), (((1) != 0) > ((0) != 0)));
alw_assert(alw_at(12,0), (((1) != 0) >= ((0) != 0)));
alw_assert(alw_at(13,0), (((1) != 0) >= ((1) != 0)));
alw_assert(alw_at(15,0), (((0) != 0) < ((1) != 0)));
alw_assert(alw_at(16,0), (((0) != 0) <= ((1) != 0)));
alw_assert(alw_at(17,0), (((0) != 0) <= ((0) != 0)));
; /*empty*/
}
}
alw_exit(alw_at(19,0), 0);
     return 0;
   }
   
