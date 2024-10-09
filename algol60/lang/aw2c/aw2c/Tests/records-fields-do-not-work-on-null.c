#include "alw.h"

static const char * const alw_src = "Tests/records-fields-do-not-work-on-null.alw";
static const char * const alw_0002_rec = "rec";

   int main (int argc, char **argv) {
     alw_init(alw_at(9,3));
     {
{
const char *alw_class_rec = alw_0002_rec;
     struct rec {
       const char *_class;
       int _number;
       int f;

     };
    auto struct rec *rec(alw_loc loc, int f);
auto int * f (alw_loc loc, void *ref);
void * r;
struct rec *rec(alw_loc loc, int f) {
       struct rec *ref = (struct rec *)alw_allocate_record(loc, sizeof(struct rec));
       ref->_class = alw_0002_rec;
       ref->_number = ++alw_record_counter;
       ref->f = f;

       return (void *)ref;
     }
    int * f (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec, "f");
       return &((struct rec *)ref)->f;
     }
    r = (void *)0;
r = rec(alw_at(5,8), 42);
alw_assert(alw_at(6,3), (*f(alw_at(6,10), r) == 42));
r = (void *)0;
alw_assert(alw_at(9,3), (*f(alw_at(9,10), r) == 42));
}
}
alw_exit(alw_at(9,3), 0);
     return 0;
   }
   
