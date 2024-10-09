#include "alw.h"

static const char * const alw_src = "Tests/records-field-of-null-run-time.alw";
static const char * const alw_0002_rec1 = "rec1";

   int main (int argc, char **argv) {
     alw_init(alw_at(6,0));
     {
{
const char *alw_class_rec1 = alw_0002_rec1;
     struct rec1 {
       const char *_class;
       int _number;
       int f1;

     };
    auto struct rec1 *rec1(alw_loc loc, int f1);
auto int * f1 (alw_loc loc, void *ref);
void * r;
struct rec1 *rec1(alw_loc loc, int f1) {
       struct rec1 *ref = (struct rec1 *)alw_allocate_record(loc, sizeof(struct rec1));
       ref->_class = alw_0002_rec1;
       ref->_number = ++alw_record_counter;
       ref->f1 = f1;

       return (void *)ref;
     }
    int * f1 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec1, "f1");
       return &((struct rec1 *)ref)->f1;
     }
    r = (void *)0;
r = (void *)0;
*f1(alw_at(5,3), r) = 1;
; /*empty*/
}
}
alw_exit(alw_at(6,0), 0);
     return 0;
   }
   
