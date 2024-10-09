#include "alw.h"

static const char * const alw_src = "Tests/records-class-set-compatibility.alw";
static const char * const alw_0004_rec4 = "rec4";
static const char * const alw_0003_rec3 = "rec3";
static const char * const alw_0002_rec2 = "rec2";

   int main (int argc, char **argv) {
     alw_init(alw_at(30,0));
     {
{
const char *alw_class_rec2 = alw_0002_rec2;
     struct rec2 {
       const char *_class;
       int _number;
       int f2;

     };
    const char *alw_class_rec3 = alw_0003_rec3;
     struct rec3 {
       const char *_class;
       int _number;
       int f3;

     };
    const char *alw_class_rec4 = alw_0004_rec4;
     struct rec4 {
       const char *_class;
       int _number;
       int f4;

     };
    auto struct rec2 *rec2(alw_loc loc, int f2);
auto int * f2 (alw_loc loc, void *ref);
auto struct rec3 *rec3(alw_loc loc, int f3);
auto int * f3 (alw_loc loc, void *ref);
auto struct rec4 *rec4(alw_loc loc, int f4);
auto int * f4 (alw_loc loc, void *ref);
void * r2;
void * r3;
void * r4;
void * r23;
void * r24;
void * r234;
struct rec2 *rec2(alw_loc loc, int f2) {
       struct rec2 *ref = (struct rec2 *)alw_allocate_record(loc, sizeof(struct rec2));
       ref->_class = alw_0002_rec2;
       ref->_number = ++alw_record_counter;
       ref->f2 = f2;

       return (void *)ref;
     }
    int * f2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec2, "f2");
       return &((struct rec2 *)ref)->f2;
     }
    struct rec3 *rec3(alw_loc loc, int f3) {
       struct rec3 *ref = (struct rec3 *)alw_allocate_record(loc, sizeof(struct rec3));
       ref->_class = alw_0003_rec3;
       ref->_number = ++alw_record_counter;
       ref->f3 = f3;

       return (void *)ref;
     }
    int * f3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_rec3, "f3");
       return &((struct rec3 *)ref)->f3;
     }
    struct rec4 *rec4(alw_loc loc, int f4) {
       struct rec4 *ref = (struct rec4 *)alw_allocate_record(loc, sizeof(struct rec4));
       ref->_class = alw_0004_rec4;
       ref->_number = ++alw_record_counter;
       ref->f4 = f4;

       return (void *)ref;
     }
    int * f4 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec4, "f4");
       return &((struct rec4 *)ref)->f4;
     }
    r2 = (void *)0;
r3 = (void *)0;
r4 = (void *)0;
r23 = (void *)0;
r24 = (void *)0;
r234 = (void *)0;
r2 = rec2(alw_at(13,9), 0);
r2 = r2;
alw_assert(alw_at(14,15), alw_is(r2, alw_0002_rec2));
r23 = r2;
alw_assert(alw_at(15,15), alw_is(r23, alw_0002_rec2));
r24 = r2;
alw_assert(alw_at(16,15), alw_is(r24, alw_0002_rec2));
r234 = r2;
alw_assert(alw_at(17,15), alw_is(r234, alw_0002_rec2));
r23 = rec2(alw_at(19,10), 0);
r2 = alw_ref_cast(alw_at(20,3), r23, alw_0002_rec2);
alw_assert(alw_at(20,16), alw_is(r2, alw_0002_rec2));
r23 = r23;
alw_assert(alw_at(21,16), alw_is(r23, alw_0002_rec2));
r24 = alw_ref_cast(alw_at(22,3), r23, alw_0002_rec2, alw_0004_rec4);
alw_assert(alw_at(22,16), alw_is(r24, alw_0002_rec2));
r234 = r23;
alw_assert(alw_at(23,16), alw_is(r234, alw_0002_rec2));
r234 = rec2(alw_at(25,11), 0);
r2 = alw_ref_cast(alw_at(26,3), r234, alw_0002_rec2);
alw_assert(alw_at(26,17), alw_is(r2, alw_0002_rec2));
r23 = alw_ref_cast(alw_at(27,3), r234, alw_0002_rec2, alw_0003_rec3);
alw_assert(alw_at(27,17), alw_is(r23, alw_0002_rec2));
r24 = alw_ref_cast(alw_at(28,3), r234, alw_0002_rec2, alw_0004_rec4);
alw_assert(alw_at(28,17), alw_is(r24, alw_0002_rec2));
r234 = r234;
alw_assert(alw_at(29,17), alw_is(r234, alw_0002_rec2));
; /*empty*/
}
}
alw_exit(alw_at(30,0), 0);
     return 0;
   }
   
