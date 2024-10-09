#include "alw.h"

static const char * const alw_src = "Tests/records-allocation-expressions.alw";
static const char * const alw_0002_c = "c";

   int main (int argc, char **argv) {
     alw_init(alw_at(28,0));
     {
{
const char *alw_class_c = alw_0002_c;
     struct c {
       const char *_class;
       int _number;
       void * r;
alw_chr s[5];
alw_chr t[8];
int i;

     };
    auto struct c *c(alw_loc loc, void * r, alw_str s, alw_str t, int i);
auto void * * r (alw_loc loc, void *ref);
auto alw_str s (alw_loc loc, void *ref);
auto alw_str t (alw_loc loc, void *ref);
auto int * i (alw_loc loc, void *ref);
void * a;
void * b;
struct c *c(alw_loc loc, void * r, alw_str s, alw_str t, int i) {
       struct c *ref = (struct c *)alw_allocate_record(loc, sizeof(struct c));
       ref->_class = alw_0002_c;
       ref->_number = ++alw_record_counter;
       ref->r = r;
alw_str_cpy(ref->s, 5, s, 5);
alw_str_cpy(ref->t, 8, t, 8);
ref->i = i;

       return (void *)ref;
     }
    void * * r (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_c, "r");
       return &((struct c *)ref)->r;
     }
    alw_str s (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_c, "s");
       return ((struct c *)ref)->s;
     }
    alw_str t (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_c, "t");
       return ((struct c *)ref)->t;
     }
    int * i (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_c, "i");
       return &((struct c *)ref)->i;
     }
    a = (void *)0;
b = (void *)0;
a = ({ alw_chr _field2[5];
alw_chr _field3[8];
alw_str_cpy(_field2, 5, (alw_str)"AAA", 3);
alw_str_cpy(_field3, 8, (alw_str)"BBB", 3);
c(alw_at(10,9), (void *)0, _field2, _field3, 1); });
alw_assert(alw_at(11,4), ((((*r(alw_at(11,11), a) == (void *)0) && (alw_str_cmp(s(alw_at(11,25), a), 5, (alw_str)"AAA", 3) == 0) ) && (alw_str_cmp(t(alw_at(11,40), a), 8, (alw_str)"BBB", 3) == 0) ) && (*i(alw_at(11,55), a) == 1)));
b = ({ alw_chr _field2[5];
alw_chr _field3[8];
alw_str_init(_field2, 5);
alw_str_cpy(_field3, 8, (alw_str)"XXX", 3);
c(alw_at(13,9), a, _field2, _field3, 2); });
alw_assert(alw_at(14,4), ((((*r(alw_at(14,11), b) == a) && (alw_str_cmp_sc(s(alw_at(14,22), b), 5, ' ') == 0) ) && (alw_str_cmp(t(alw_at(14,35), b), 8, (alw_str)"XXX", 3) == 0) ) && (*i(alw_at(14,50), b) == 2)));
a = b;
b = ({ alw_chr _field2[5];
alw_chr _field3[8];
alw_str_cpy(_field2, 5, (alw_str)"XXX", 3);
alw_str_init(_field3, 8);
c(alw_at(17,9), b, _field2, _field3, 3); });
alw_assert(alw_at(18,4), ((*r(alw_at(18,11), b) == a) && (*r(alw_at(18,22), b) != b)));
alw_assert(alw_at(19,4), (alw_str_cmp(s(alw_at(19,11), b), 5, (alw_str)"XXX", 3) == 0) );
alw_assert(alw_at(20,4), (alw_str_cmp_sc(t(alw_at(20,11), b), 8, ' ') == 0) );
alw_assert(alw_at(21,4), (*i(alw_at(21,11), b) == 3));
b = ({ alw_chr _field2[5];
alw_chr _field3[8];
alw_str_init(_field2, 5);
alw_str_init(_field3, 8);
c(alw_at(23,9), (void *)0, _field2, _field3, 0); });
alw_assert(alw_at(24,4), ((((*r(alw_at(24,11), b) == (void *)0) && (alw_str_cmp_sc(s(alw_at(24,25), b), 5, ' ') == 0) ) && (alw_str_cmp_sc(t(alw_at(24,38), b), 8, ' ') == 0) ) && (*i(alw_at(24,51), b) == 0)));
b = c(alw_at(26,9), (void *)0, alw_str_var(5), alw_str_var(8), 0);
alw_assert(alw_at(27,4), ((((*r(alw_at(27,11), b) == (void *)0) && (alw_str_cmp_sc(s(alw_at(27,25), b), 5, ' ') == 0) ) && (alw_str_cmp_sc(t(alw_at(27,38), b), 8, ' ') == 0) ) && (*i(alw_at(27,51), b) == 0)));
; /*empty*/
}
}
alw_exit(alw_at(28,0), 0);
     return 0;
   }
   
