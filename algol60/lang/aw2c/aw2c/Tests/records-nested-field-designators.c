#include "alw.h"

static const char * const alw_src = "Tests/records-nested-field-designators.alw";
static const char * const alw_0005_rec3 = "rec3";
static const char * const alw_0004_rec2 = "rec2";
static const char * const alw_0003_rec1 = "rec1";

   int main (int argc, char **argv) {
     alw_init(alw_at(24,0));
     {
{
const char *alw_class_rec1 = alw_0003_rec1;
     struct rec1 {
       const char *_class;
       int _number;
       int i1;
void * f1;

     };
    const char *alw_class_rec2 = alw_0004_rec2;
     struct rec2 {
       const char *_class;
       int _number;
       int i2;
void * f2;

     };
    const char *alw_class_rec3 = alw_0005_rec3;
     struct rec3 {
       const char *_class;
       int _number;
       int i3;
void * f3;

     };
    auto struct rec1 *rec1(alw_loc loc, int i1, void * f1);
auto int * i1 (alw_loc loc, void *ref);
auto void * * f1 (alw_loc loc, void *ref);
auto struct rec2 *rec2(alw_loc loc, int i2, void * f2);
auto int * i2 (alw_loc loc, void *ref);
auto void * * f2 (alw_loc loc, void *ref);
auto struct rec3 *rec3(alw_loc loc, int i3, void * f3);
auto int * i3 (alw_loc loc, void *ref);
auto void * * f3 (alw_loc loc, void *ref);
void * r;
struct rec1 *rec1(alw_loc loc, int i1, void * f1) {
       struct rec1 *ref = (struct rec1 *)alw_allocate_record(loc, sizeof(struct rec1));
       ref->_class = alw_0003_rec1;
       ref->_number = ++alw_record_counter;
       ref->i1 = i1;
ref->f1 = f1;

       return (void *)ref;
     }
    int * i1 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_rec1, "i1");
       return &((struct rec1 *)ref)->i1;
     }
    void * * f1 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_rec1, "f1");
       return &((struct rec1 *)ref)->f1;
     }
    struct rec2 *rec2(alw_loc loc, int i2, void * f2) {
       struct rec2 *ref = (struct rec2 *)alw_allocate_record(loc, sizeof(struct rec2));
       ref->_class = alw_0004_rec2;
       ref->_number = ++alw_record_counter;
       ref->i2 = i2;
ref->f2 = f2;

       return (void *)ref;
     }
    int * i2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec2, "i2");
       return &((struct rec2 *)ref)->i2;
     }
    void * * f2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec2, "f2");
       return &((struct rec2 *)ref)->f2;
     }
    struct rec3 *rec3(alw_loc loc, int i3, void * f3) {
       struct rec3 *ref = (struct rec3 *)alw_allocate_record(loc, sizeof(struct rec3));
       ref->_class = alw_0005_rec3;
       ref->_number = ++alw_record_counter;
       ref->i3 = i3;
ref->f3 = f3;

       return (void *)ref;
     }
    int * i3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0005_rec3, "i3");
       return &((struct rec3 *)ref)->i3;
     }
    void * * f3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0005_rec3, "f3");
       return &((struct rec3 *)ref)->f3;
     }
    r = (void *)0;
r = rec1(alw_at(9,8), 1, rec2(alw_at(9,16), 2, rec3(alw_at(9,24), 3, (void *)0)));
alw_assert(alw_at(11,3), alw_is(r, alw_0003_rec1));
alw_assert(alw_at(12,3), (*i1(alw_at(12,10), r) == 1));
alw_assert(alw_at(13,3), alw_is(*f1(alw_at(13,10), r), alw_0004_rec2));
alw_assert(alw_at(14,3), (*i2(alw_at(14,10), *f1(alw_at(14,13), r)) == 2));
alw_assert(alw_at(15,3), alw_is(*f2(alw_at(15,10), *f1(alw_at(15,13), r)), alw_0005_rec3));
alw_assert(alw_at(16,3), (*i3(alw_at(16,10), *f2(alw_at(16,13), *f1(alw_at(16,16), r))) == 3));
alw_assert(alw_at(17,3), (*f3(alw_at(17,10), *f2(alw_at(17,13), *f1(alw_at(17,16), r))) == (void *)0));
*f3(alw_at(19,3), *f2(alw_at(19,6), *f1(alw_at(19,9), r))) = r;
alw_assert(alw_at(21,3), alw_is(*f3(alw_at(21,10), *f2(alw_at(21,13), *f1(alw_at(21,16), r))), alw_0003_rec1));
alw_assert(alw_at(22,3), (*i1(alw_at(22,10), *f3(alw_at(22,13), *f2(alw_at(22,16), *f1(alw_at(22,19), r)))) == 1));
alw_assert(alw_at(23,3), (*i2(alw_at(23,10), *f1(alw_at(23,13), *f3(alw_at(23,16), *f2(alw_at(23,19), *f1(alw_at(23,22), r))))) == 2));
; /*empty*/
}
}
alw_exit(alw_at(24,0), 0);
     return 0;
   }
   
