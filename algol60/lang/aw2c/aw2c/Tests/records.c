#include "alw.h"

static const char * const alw_src = "Tests/records.alw";
static const char * const alw_0002_r = "r";

   int main (int argc, char **argv) {
     alw_init(alw_at(12,3));
     {
{
const char *alw_class_r = alw_0002_r;
     struct r {
       const char *_class;
       int _number;
       int i;
double n;

     };
    auto struct r *r(alw_loc loc, int i, double n);
auto int * i (alw_loc loc, void *ref);
auto double * n (alw_loc loc, void *ref);
void * x;
struct r *r(alw_loc loc, int i, double n) {
       struct r *ref = (struct r *)alw_allocate_record(loc, sizeof(struct r));
       ref->_class = alw_0002_r;
       ref->_number = ++alw_record_counter;
       ref->i = i;
ref->n = n;

       return (void *)ref;
     }
    int * i (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_r, "i");
       return &((struct r *)ref)->i;
     }
    double * n (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_r, "n");
       return &((struct r *)ref)->n;
     }
    x = (void *)0;
x = r(alw_at(5,8), 1, 1.0);
alw_assert(alw_at(6,3), (*i(alw_at(6,10), x) == 1));
alw_assert(alw_at(7,3), (*n(alw_at(7,10), x) == 1.0));
*i(alw_at(9,3), x) = 2;
*n(alw_at(10,3), x) = 2.0;
alw_assert(alw_at(11,3), (*i(alw_at(11,10), x) == 2));
alw_assert(alw_at(12,3), (*n(alw_at(12,10), x) == 2.0));
}
}
alw_exit(alw_at(12,3), 0);
     return 0;
   }
   
