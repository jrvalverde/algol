#include "alw.h"

static const char * const alw_src = "Tests/string-case.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(20,0));
     {
{
auto void p(alw_str x);
alw_chr a1[6];
alw_chr a2[6];
alw_chr a3[6];
alw_chr s[6];
void p(alw_str x) {
{
{
*alw_str_sub(alw_at(6,6), x, 6, 0, 1) = code((decode(*alw_str_sub(alw_at(6,28), x, 6, 0, 1)) + 64));
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(7,6), 2);
alw_write_string(alw_at(7,6), x, 6);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
 }
alw_str_init(a1, 6);
alw_str_init(a2, 6);
alw_str_init(a3, 6);
alw_str_init(s, 6);
alw_str_cpy_sc(a1, 6, 'a');
alw_str_cpy(a2, 6, (alw_str)"b123", 4);
alw_str_cpy(a3, 6, (alw_str)"c12345", 6);
{ 
             const int _start = 1;
             const int _limit = 3;
             int i = _start;
             while (i <= _limit) {
               {
alw_chr _p_arg1[6];
alw_str_cpy(_p_arg1, 6, ({ alw_str _value = alw_str_var(6);
                int _selector = i;
                switch (_selector) {
                  case 1: alw_str_cpy(_value, 6, a1, 6);
 break;
case 2: alw_str_cpy(_value, 6, a2, 6);
 break;
case 3: alw_str_cpy(_value, 6, a3, 6);
 break;

                  default: alw_case_range_error(alw_at(13,27), _selector);
                } 
                _value;
             }), 6);
p(_p_arg1);
}

               ++i;
             }
           }
          alw_assert(alw_at(15,3), (alw_str_cmp_sc(a1, 6, 'a') == 0) );
alw_assert(alw_at(16,3), (alw_str_cmp(a2, 6, (alw_str)"b123", 4) == 0) );
alw_assert(alw_at(17,3), (alw_str_cmp(a3, 6, (alw_str)"c12345", 6) == 0) );
{ 
             const int _start = 1;
             const int _limit = 3;
             int i = _start;
             while (i <= _limit) {
               {
alw_chr _p_arg1[6];
alw_str_cpy(_p_arg1, 6, ({ alw_str _value = alw_str_var(6);
                int _selector = i;
                switch (_selector) {
                  case 1: alw_str_cpy_sc(_value, 6, 'a');
 break;
case 2: alw_str_cpy(_value, 6, (alw_str)"b123", 4);
 break;
case 3: alw_str_cpy(_value, 6, (alw_str)"c12345", 6);
 break;

                  default: alw_case_range_error(alw_at(19,27), _selector);
                } 
                _value;
             }), 6);
p(_p_arg1);
}

               ++i;
             }
           }
          ; /*empty*/
}
}
alw_exit(alw_at(20,0), 0);
     return 0;
   }
   
