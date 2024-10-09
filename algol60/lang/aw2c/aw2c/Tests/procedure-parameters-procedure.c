#include "alw.h"

static const char * const alw_src = "Tests/procedure-parameters-procedure.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(44,0));
     {
{
auto double f(double i);
auto double g(double i);
auto double sum(int first, int last, double (*f)(double x));
auto double sum2(int first, int last, double (*f)(double x), double (*g)(double x));
auto double c(double (*a)(double x), double (*b)(double x), double x);
auto double sum3(int first, int last, double (*c)(double (*a)(double x), double (*b)(double x), double x), double (*f)(double x), double (*g)(double x));
double f(double i) {
return (i + alw_rdiv(alw_at(3,12), i, 3));
 }
double g(double i) {
return (i + alw_rdiv(alw_at(6,12), i, 2));
 }
double sum(int first, int last, double (*f)(double x)) {
return ({
({
double total;
total = 0.0;
total = 0;
{ 
             const int _start = first;
             const int _limit = last;
             int i = _start;
             while (i <= _limit) {
               total = (total + f(i));

               ++i;
             }
           }
          total;
});
});
 }
double sum2(int first, int last, double (*f)(double x), double (*g)(double x)) {
return ({
({
double total;
total = 0.0;
total = 0;
{ 
             const int _start = first;
             const int _limit = last;
             int i = _start;
             while (i <= _limit) {
               total = (total + f(g(i)));

               ++i;
             }
           }
          total;
});
});
 }
double c(double (*a)(double x), double (*b)(double x), double x) {
return a(b(x));
 }
double sum3(int first, int last, double (*c)(double (*a)(double x), double (*b)(double x), double x), double (*f)(double x), double (*g)(double x)) {
return ({
({
double total;
total = 0.0;
total = 0;
{ 
             const int _start = first;
             const int _limit = last;
             int i = _start;
             while (i <= _limit) {
               total = (total + c(f, g, i));

               ++i;
             }
           }
          total;
});
});
 }
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(40,3), 2);
alw_write_real(alw_at(40,3), sum(1, 10, f));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(41,3), 2);
alw_write_real(alw_at(41,3), sum(1, 10, g));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(42,3), 2);
alw_write_real(alw_at(42,3), sum2(1, 10, f, g));

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(43,3), 2);
alw_write_real(alw_at(43,3), sum3(1, 10, c, f, g));

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(44,0), 0);
     return 0;
   }
   
