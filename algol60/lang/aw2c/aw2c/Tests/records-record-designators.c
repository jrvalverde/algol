#include "alw.h"

static const char * const alw_src = "Tests/records-record-designators.alw";
static const char * const alw_0004_rec = "rec";

   int main (int argc, char **argv) {
     alw_init(alw_at(49,0));
     {
{
const char *alw_class_rec = alw_0004_rec;
     struct rec {
       const char *_class;
       int _number;
       int i;
double x;
_Complex double c;
int l;
unsigned int b;
void * r;
alw_chr s[3];

     };
    auto struct rec *rec(alw_loc loc, int i, double x, _Complex double c, int l, unsigned int b, void * r, alw_str s);
auto int * i (alw_loc loc, void *ref);
auto double * x (alw_loc loc, void *ref);
auto _Complex double * c (alw_loc loc, void *ref);
auto int * l (alw_loc loc, void *ref);
auto unsigned int * b (alw_loc loc, void *ref);
auto void * * r (alw_loc loc, void *ref);
auto alw_str s (alw_loc loc, void *ref);
void * ref;
struct rec *rec(alw_loc loc, int i, double x, _Complex double c, int l, unsigned int b, void * r, alw_str s) {
       struct rec *ref = (struct rec *)alw_allocate_record(loc, sizeof(struct rec));
       ref->_class = alw_0004_rec;
       ref->_number = ++alw_record_counter;
       ref->i = i;
ref->x = x;
ref->c = c;
ref->l = l;
ref->b = b;
ref->r = r;
alw_str_cpy(ref->s, 3, s, 3);

       return (void *)ref;
     }
    int * i (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "i");
       return &((struct rec *)ref)->i;
     }
    double * x (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "x");
       return &((struct rec *)ref)->x;
     }
    _Complex double * c (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "c");
       return &((struct rec *)ref)->c;
     }
    int * l (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "l");
       return &((struct rec *)ref)->l;
     }
    unsigned int * b (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "b");
       return &((struct rec *)ref)->b;
     }
    void * * r (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "r");
       return &((struct rec *)ref)->r;
     }
    alw_str s (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec, "s");
       return ((struct rec *)ref)->s;
     }
    ref = (void *)0;
ref = rec(alw_at(16,10), 0, 0.0, 0.0, 0, 0, (void *)0, alw_str_var(3));
alw_assert(alw_at(18,3), (*i(alw_at(18,10), ref) == 0));
alw_assert(alw_at(19,3), (*x(alw_at(19,10), ref) == 0.0));
alw_assert(alw_at(20,3), (*c(alw_at(20,10), ref) == 0.0));
alw_assert(alw_at(21,3), (! *l(alw_at(21,12), ref)));
alw_assert(alw_at(22,3), (*b(alw_at(22,10), ref) == 0x0));
alw_assert(alw_at(23,3), (*r(alw_at(23,10), ref) == (void *)0));
alw_assert(alw_at(24,3), (alw_str_cmp(s(alw_at(24,10), ref), 3, (alw_str)"   ", 3) == 0) );
*i(alw_at(26,3), ref) = 1;
*x(alw_at(27,3), ref) = 2.0;
*c(alw_at(28,3), ref) = 3.0;
ref = ({ alw_chr _field7[3];
alw_str_init(_field7, 3);
rec(alw_at(30,10), 0, 0.0, 0.0, 0, 0, (void *)0, _field7); });
alw_assert(alw_at(32,3), (*i(alw_at(32,10), ref) == 0));
alw_assert(alw_at(33,3), (*x(alw_at(33,10), ref) == 0.0));
alw_assert(alw_at(34,3), (*c(alw_at(34,10), ref) == 0.0));
alw_assert(alw_at(35,3), (! *l(alw_at(35,12), ref)));
alw_assert(alw_at(36,3), (*b(alw_at(36,10), ref) == 0x0));
alw_assert(alw_at(37,3), (*r(alw_at(37,10), ref) == (void *)0));
alw_assert(alw_at(38,3), (alw_str_cmp(s(alw_at(38,10), ref), 3, (alw_str)"   ", 3) == 0) );
ref = ({ alw_chr _field7[3];
alw_str_cpy(_field7, 3, (alw_str)"Yay", 3);
rec(alw_at(40,10), 1, 0.0, (2 + 3.0i), 1, 0, (void *)0, _field7); });
alw_assert(alw_at(42,3), (*i(alw_at(42,10), ref) == 1));
alw_assert(alw_at(43,3), (*x(alw_at(43,10), ref) == 0.0));
alw_assert(alw_at(44,3), (*c(alw_at(44,10), ref) == (2 + 3.0i)));
alw_assert(alw_at(45,3), *l(alw_at(45,10), ref));
alw_assert(alw_at(46,3), (*b(alw_at(46,10), ref) == 0x0));
alw_assert(alw_at(47,3), (*r(alw_at(47,10), ref) == (void *)0));
alw_assert(alw_at(48,3), (alw_str_cmp(s(alw_at(48,10), ref), 3, (alw_str)"Yay", 3) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(49,0), 0);
     return 0;
   }
   
