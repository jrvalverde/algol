#include "alw.h"

static const char * const alw_src = "Tests/records-string-fields.alw";
static const char * const alw_0002_rec = "rec";

   int main (int argc, char **argv) {
     alw_init(alw_at(18,0));
     {
{
const char *alw_class_rec = alw_0002_rec;
     struct rec {
       const char *_class;
       int _number;
       alw_chr s[5];

     };
    auto struct rec *rec(alw_loc loc, alw_str s);
auto alw_str s (alw_loc loc, void *ref);
alw_chr t[5];
alw_chr u[5];
void * r;
struct rec *rec(alw_loc loc, alw_str s) {
       struct rec *ref = (struct rec *)alw_allocate_record(loc, sizeof(struct rec));
       ref->_class = alw_0002_rec;
       ref->_number = ++alw_record_counter;
       alw_str_cpy(ref->s, 5, s, 5);

       return (void *)ref;
     }
    alw_str s (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec, "s");
       return ((struct rec *)ref)->s;
     }
    alw_str_init(t, 5);
alw_str_init(u, 5);
r = (void *)0;
r = ({ alw_chr _field1[5];
alw_str_cpy(_field1, 5, (alw_str)"012", 3);
rec(alw_at(6,8), _field1); });
alw_str_cpy(u, 5, (alw_str)"012", 3);
alw_str_cpy(t, 5, u, 5);
alw_assert(alw_at(10,3), (alw_str_cmp(t, 5, (alw_str)"012  ", 5) == 0) );
alw_assert(alw_at(11,3), (alw_str_cmp(t, 5, (alw_str)"012", 3) == 0) );
alw_str_cpy(t, 5, s(alw_at(13,8), r), 5);
alw_assert(alw_at(14,3), (alw_str_cmp(t, 5, (alw_str)"012  ", 5) == 0) );
alw_assert(alw_at(15,3), (alw_str_cmp(t, 5, (alw_str)"012", 3) == 0) );
alw_assert(alw_at(16,3), (alw_str_cmp(s(alw_at(16,10), r), 5, (alw_str)"012", 3) == 0) );
alw_assert(alw_at(17,3), (alw_str_cmp(s(alw_at(17,10), r), 5, (alw_str)"012  ", 5) == 0) );
; /*empty*/
}
}
alw_exit(alw_at(18,0), 0);
     return 0;
   }
   
