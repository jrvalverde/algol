#include "alw.h"

static const char * const alw_src = "Tests/array-parameters.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(51,6));
     {
{
auto void p(int * a(alw_loc,int,int), int m, int n);
auto void q(int * a(alw_loc,int), int n);
auto void r(int * a(alw_loc,int,int), int m, int n);
auto void break_();
void p(int * a(alw_loc,int,int), int m, int n) {
{
{
i_w = 2;
{ 
             const int _start = 1;
             const int _limit = m;
             int i = _start;
             while (i <= _limit) {
               {
{
{ 
             const int _start = 1;
             const int _limit = n;
             int j = _start;
             while (j <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_integer(alw_at(8,12), *a(alw_at(8,20), i, j));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++j;
             }
           }
          { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(9,9), 2);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          }
}
 }
void q(int * a(alw_loc,int), int n) {
{
{
i_w = 2;
{ 
             const int _start = 1;
             const int _limit = n;
             int i = _start;
             while (i <= _limit) {
               { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_write_integer(alw_at(17,9), *a(alw_at(17,17), i));

                 alw_Editing_restore(&_editing_state);
               }
              
               ++i;
             }
           }
          ; /*empty*/
}
}
 }
void r(int * a(alw_loc,int,int), int m, int n) {
{
{
i_w = 2;
{ 
             const int _start = 1;
             const int _limit = m;
             int i = _start;
             while (i <= _limit) {
               {
{
{
const int _q_arg1_sub0 = i;
int * _q_arg1(alw_loc loc, int _q_arg1_sub1) { 
                     return a(alw_at(25,11), _q_arg1_sub0, _q_arg1_sub1); 
                    }
q(_q_arg1, n);
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(26,9), 2);

                 alw_Editing_restore(&_editing_state);
               }
              }
}

               ++i;
             }
           }
          }
}
 }
void break_() {
{
{
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(31,26), 2);
alw_write_char(alw_at(31,26), '*');

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(31,38), 2);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
 }
{
const int _a_lwb1 = 1, _a_upb1 = 3;
const int _a_lwb2 = 1, _a_upb2 = 4;
const int _b_lwb1 = 1, _b_upb1 = 4;
const int _b_lwb2 = 1, _b_upb2 = 3;
{
auto int * a(alw_loc loc, int _sub1, int _sub2);
auto int * b(alw_loc loc, int _sub1, int _sub2);
int _a_array[_a_upb1 - _a_lwb1 + 1][_a_upb2 - _a_lwb2 + 1];
int _b_array[_b_upb1 - _b_lwb1 + 1][_b_upb2 - _b_lwb2 + 1];
int n;
int * a(alw_loc loc, int _sub1, int _sub2) 
     {
       alw_array_range_check(a, 1);alw_array_range_check(a, 2);
       return &_a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2];
     }
    int * b(alw_loc loc, int _sub1, int _sub2) 
     {
       alw_array_range_check(b, 1);alw_array_range_check(b, 2);
       return &_b_array[_sub1 - _b_lwb1][_sub2 - _b_lwb2];
     }
    { 
       int _sub1, _sub2;
       alw_array_bounds_check(a, alw_at(34,6), 1);alw_array_bounds_check(a, alw_at(34,6), 2);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1)
for (_sub2 = _a_lwb2; _sub2 <= _a_upb2; ++_sub2) 
       _a_array[_sub1 - _a_lwb1][_sub2 - _a_lwb2] = 0;

     }
    { 
       int _sub1, _sub2;
       alw_array_bounds_check(b, alw_at(35,6), 1);alw_array_bounds_check(b, alw_at(35,6), 2);
       for (_sub1 = _b_lwb1; _sub1 <= _b_upb1; ++_sub1)
for (_sub2 = _b_lwb2; _sub2 <= _b_upb2; ++_sub2) 
       _b_array[_sub1 - _b_lwb1][_sub2 - _b_lwb2] = 0;

     }
    n = 0;
n = 1;
{ 
             const int _start = 1;
             const int _limit = 3;
             int i = _start;
             while (i <= _limit) {
               { 
             const int _start = 1;
             const int _limit = 4;
             int j = _start;
             while (j <= _limit) {
               {
{
*a(alw_at(41,15), i, j) = n;
*b(alw_at(42,15), j, i) = n;
n = (n + 1);
}
}

               ++j;
             }
           }
          
               ++i;
             }
           }
          p(a, 3, 4);
break_();
p(a, 3, 4);
break_();
p(b, 4, 3);
break_();
{
const int _q_arg1_sub0 = 1;
int * _q_arg1(alw_loc loc, int _q_arg1_sub1) { 
                     return a(alw_at(49,8), _q_arg1_sub0, _q_arg1_sub1); 
                    }
q(_q_arg1, 4);
}
break_();
{
const int _q_arg1_sub1 = 1;
int * _q_arg1(alw_loc loc, int _q_arg1_sub0) { 
                     return a(alw_at(50,8), _q_arg1_sub0, _q_arg1_sub1); 
                    }
q(_q_arg1, 3);
}
break_();
r(b, 4, 3);
}
}
}
}
alw_exit(alw_at(51,6), 0);
     return 0;
   }
   
