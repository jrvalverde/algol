#include "alw.h"

static const char * const alw_src = "Tests/roman4.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(51,0));
     {
{
auto void roman(int number, alw_str characters, int * length);
int i;
alw_chr s[15];
void roman(int number, alw_str characters, int * length) {
{
{
auto void append(alw_chr c);
auto void i();
auto void v();
auto void x();
int place;
int power;
void append(alw_chr c) {
{
{
*alw_str_sub(alw_at(11,18), characters, 15, *length, 1) = c;
*length = (*length + 1);
}
}
 }
void i() {
append(({ alw_chr _value = ' ';
                int _selector = place;
                switch (_selector) {
                  case 1: _value = 'I';
 break;
case 2: _value = 'X';
 break;
case 3: _value = 'C';
 break;
case 4: _value = 'M';
 break;

                  default: alw_case_range_error(alw_at(13,28), _selector);
                } 
                _value;
             }));
 }
void v() {
append(({ alw_chr _value = ' ';
                int _selector = place;
                switch (_selector) {
                  case 1: _value = 'V';
 break;
case 2: _value = 'L';
 break;
case 3: _value = 'D';
 break;

                  default: alw_case_range_error(alw_at(14,28), _selector);
                } 
                _value;
             }));
 }
void x() {
append(({ alw_chr _value = ' ';
                int _selector = place;
                switch (_selector) {
                  case 1: _value = 'X';
 break;
case 2: _value = 'C';
 break;
case 3: _value = 'M';
 break;

                  default: alw_case_range_error(alw_at(15,28), _selector);
                } 
                _value;
             }));
 }
place = 0;
power = 0;
alw_assert(alw_at(17,8), ((number >= 1) && (number < 4000)));
alw_str_cpy(characters, 15, (alw_str)"               ", 15);
*length = 0;
power = 1000;
place = 4;
while ((place > 0))
 {
{
{ 
             const int _selector = (alw_div(alw_at(25,28), number, power) + 1);
             switch (_selector) {
             case 1: {
{
; /*empty*/
}
}
; break;
case 2: {
{
i();
}
}
; break;
case 3: {
{
i();
i();
}
}
; break;
case 4: {
{
i();
i();
i();
}
}
; break;
case 5: {
{
i();
v();
}
}
; break;
case 6: {
{
v();
}
}
; break;
case 7: {
{
v();
i();
}
}
; break;
case 8: {
{
v();
i();
i();
}
}
; break;
case 9: {
{
v();
i();
i();
i();
}
}
; break;
case 10: {
{
i();
x();
}
}
; break;

             default: alw_case_range_error(alw_at(25,16), _selector);
             }
           }
          number = alw_rem(alw_at(37,33), number, power);
power = alw_div(alw_at(38,31), power, 10);
place = (place - 1);
}
}
 
}
}
 }
i = 0;
alw_str_init(s, 15);
{
alw_chr _roman_arg2[15];
int _roman_arg3;
alw_str_init(_roman_arg2, 15);
_roman_arg3 = 0;
roman(1, _roman_arg2, &_roman_arg3);
alw_str_cpy(s, 15, _roman_arg2, 15);
i = _roman_arg3;
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(46,19), 2);
alw_write_string(alw_at(46,19), s, 15);
alw_write_integer(alw_at(46,19), i);

                 alw_Editing_restore(&_editing_state);
               }
              {
alw_chr _roman_arg2[15];
int _roman_arg3;
alw_str_init(_roman_arg2, 15);
_roman_arg3 = 0;
roman(3999, _roman_arg2, &_roman_arg3);
alw_str_cpy(s, 15, _roman_arg2, 15);
i = _roman_arg3;
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(47,19), 2);
alw_write_string(alw_at(47,19), s, 15);
alw_write_integer(alw_at(47,19), i);

                 alw_Editing_restore(&_editing_state);
               }
              {
alw_chr _roman_arg2[15];
int _roman_arg3;
alw_str_init(_roman_arg2, 15);
_roman_arg3 = 0;
roman(3888, _roman_arg2, &_roman_arg3);
alw_str_cpy(s, 15, _roman_arg2, 15);
i = _roman_arg3;
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(48,19), 2);
alw_write_string(alw_at(48,19), s, 15);
alw_write_integer(alw_at(48,19), i);

                 alw_Editing_restore(&_editing_state);
               }
              {
alw_chr _roman_arg2[15];
int _roman_arg3;
alw_str_init(_roman_arg2, 15);
_roman_arg3 = 0;
roman(2009, _roman_arg2, &_roman_arg3);
alw_str_cpy(s, 15, _roman_arg2, 15);
i = _roman_arg3;
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(49,19), 2);
alw_write_string(alw_at(49,19), s, 15);
alw_write_integer(alw_at(49,19), i);

                 alw_Editing_restore(&_editing_state);
               }
              {
alw_chr _roman_arg2[15];
int _roman_arg3;
alw_str_init(_roman_arg2, 15);
_roman_arg3 = 0;
roman(405, _roman_arg2, &_roman_arg3);
alw_str_cpy(s, 15, _roman_arg2, 15);
i = _roman_arg3;
}
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(50,19), 2);
alw_write_string(alw_at(50,19), s, 15);
alw_write_integer(alw_at(50,19), i);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(51,0), 0);
     return 0;
   }
   
