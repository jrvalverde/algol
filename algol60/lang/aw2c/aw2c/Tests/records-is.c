#include "alw.h"

static const char * const alw_src = "Tests/records-is.alw";
static const char * const alw_0004_rec3 = "rec3";
static const char * const alw_0003_rec2 = "rec2";
static const char * const alw_0002_rec1 = "rec1";

   int main (int argc, char **argv) {
     alw_init(alw_at(31,0));
     {
{
const char *alw_class_rec1 = alw_0002_rec1;
     struct rec1 {
       const char *_class;
       int _number;
       int f1;

     };
    const char *alw_class_rec2 = alw_0003_rec2;
     struct rec2 {
       const char *_class;
       int _number;
       int f2;

     };
    const char *alw_class_rec3 = alw_0004_rec3;
     struct rec3 {
       const char *_class;
       int _number;
       int f3;

     };
    auto struct rec1 *rec1(alw_loc loc, int f1);
auto int * f1 (alw_loc loc, void *ref);
auto struct rec2 *rec2(alw_loc loc, int f2);
auto int * f2 (alw_loc loc, void *ref);
auto struct rec3 *rec3(alw_loc loc, int f3);
auto int * f3 (alw_loc loc, void *ref);
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
    struct rec2 *rec2(alw_loc loc, int f2) {
       struct rec2 *ref = (struct rec2 *)alw_allocate_record(loc, sizeof(struct rec2));
       ref->_class = alw_0003_rec2;
       ref->_number = ++alw_record_counter;
       ref->f2 = f2;

       return (void *)ref;
     }
    int * f2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_rec2, "f2");
       return &((struct rec2 *)ref)->f2;
     }
    struct rec3 *rec3(alw_loc loc, int f3) {
       struct rec3 *ref = (struct rec3 *)alw_allocate_record(loc, sizeof(struct rec3));
       ref->_class = alw_0004_rec3;
       ref->_number = ++alw_record_counter;
       ref->f3 = f3;

       return (void *)ref;
     }
    int * f3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec3, "f3");
       return &((struct rec3 *)ref)->f3;
     }
    r = (void *)0;
r = (void *)0;
alw_assert(alw_at(9,3), (r == (void *)0));
alw_assert(alw_at(10,3), (! alw_is(r, alw_0002_rec1)));
alw_assert(alw_at(11,3), (! alw_is(r, alw_0003_rec2)));
alw_assert(alw_at(12,3), (! alw_is(r, alw_0004_rec3)));
r = rec1(alw_at(14,8), 0);
alw_assert(alw_at(15,3), (r != (void *)0));
alw_assert(alw_at(16,3), alw_is(r, alw_0002_rec1));
alw_assert(alw_at(17,3), (! alw_is(r, alw_0003_rec2)));
alw_assert(alw_at(18,3), (! alw_is(r, alw_0004_rec3)));
r = rec2(alw_at(20,8), 0);
alw_assert(alw_at(21,3), (r != (void *)0));
alw_assert(alw_at(22,3), (! alw_is(r, alw_0002_rec1)));
alw_assert(alw_at(23,3), alw_is(r, alw_0003_rec2));
alw_assert(alw_at(24,3), (! alw_is(r, alw_0004_rec3)));
r = rec3(alw_at(26,8), 0);
alw_assert(alw_at(27,3), (r != (void *)0));
alw_assert(alw_at(28,3), (! alw_is(r, alw_0002_rec1)));
alw_assert(alw_at(29,3), (! alw_is(r, alw_0003_rec2)));
alw_assert(alw_at(30,3), alw_is(r, alw_0004_rec3));
; /*empty*/
}
}
alw_exit(alw_at(31,0), 0);
     return 0;
   }
   
