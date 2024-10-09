#include "alw.h"

static const char * const alw_src = "Tests/records-uninitialized-element.alw";
static const char * const alw_0002_rec = "rec";

   int main (int argc, char **argv) {
     alw_init(alw_at(4,4));
     {
const int _a_lwb1 = 1, _a_upb1 = 2;
{
const char *alw_class_rec = alw_0002_rec;
     struct rec {
       const char *_class;
       int _number;
       void * f;

     };
    auto struct rec *rec(alw_loc loc, void * f);
auto void * * f (alw_loc loc, void *ref);
auto void * * a(alw_loc loc, int _sub1);
void * _a_array[_a_upb1 - _a_lwb1 + 1];
struct rec *rec(alw_loc loc, void * f) {
       struct rec *ref = (struct rec *)alw_allocate_record(loc, sizeof(struct rec));
       ref->_class = alw_0002_rec;
       ref->_number = ++alw_record_counter;
       ref->f = f;

       return (void *)ref;
     }
    void * * f (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec, "f");
       return &((struct rec *)ref)->f;
     }
    void * * a(alw_loc loc, int _sub1) 
     {
       alw_array_range_check(a, 1);
       return &_a_array[_sub1 - _a_lwb1];
     }
    { 
       int _sub1;
       alw_array_bounds_check(a, alw_at(3,4), 1);
       for (_sub1 = _a_lwb1; _sub1 <= _a_upb1; ++_sub1) 
       _a_array[_sub1 - _a_lwb1] = (void *)0;

     }
    *f(alw_at(4,4), *a(alw_at(4,6), 1)) = (void *)0;
}
}
alw_exit(alw_at(4,4), 0);
     return 0;
   }
   
