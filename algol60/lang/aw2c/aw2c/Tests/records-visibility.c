#include "alw.h"

static const char * const alw_src = "Tests/records-visibility.alw";
static const char * const alw_0007_rec3 = "rec3";
static const char * const alw_0005_rec2 = "rec2";
static const char * const alw_0004_rec1 = "rec1";

   int main (int argc, char **argv) {
     alw_init(alw_at(17,3));
     {
{
const char *alw_class_rec1 = alw_0004_rec1;
     struct rec1 {
       const char *_class;
       int _number;
       void * f1;

     };
    const char *alw_class_rec2 = alw_0005_rec2;
     struct rec2 {
       const char *_class;
       int _number;
       void * f2;

     };
    auto struct rec1 *rec1(alw_loc loc, void * f1);
auto void * * f1 (alw_loc loc, void *ref);
auto struct rec2 *rec2(alw_loc loc, void * f2);
auto void * * f2 (alw_loc loc, void *ref);
struct rec1 *rec1(alw_loc loc, void * f1) {
       struct rec1 *ref = (struct rec1 *)alw_allocate_record(loc, sizeof(struct rec1));
       ref->_class = alw_0004_rec1;
       ref->_number = ++alw_record_counter;
       ref->f1 = f1;

       return (void *)ref;
     }
    void * * f1 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_rec1, "f1");
       return &((struct rec1 *)ref)->f1;
     }
    struct rec2 *rec2(alw_loc loc, void * f2) {
       struct rec2 *ref = (struct rec2 *)alw_allocate_record(loc, sizeof(struct rec2));
       ref->_class = alw_0005_rec2;
       ref->_number = ++alw_record_counter;
       ref->f2 = f2;

       return (void *)ref;
     }
    void * * f2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0005_rec2, "f2");
       return &((struct rec2 *)ref)->f2;
     }
    {
{
const char *alw_class_rec3 = alw_0007_rec3;
     struct rec3 {
       const char *_class;
       int _number;
       void * f3;

     };
    auto struct rec3 *rec3(alw_loc loc, void * f3);
auto void * * f3 (alw_loc loc, void *ref);
void * r;
struct rec3 *rec3(alw_loc loc, void * f3) {
       struct rec3 *ref = (struct rec3 *)alw_allocate_record(loc, sizeof(struct rec3));
       ref->_class = alw_0007_rec3;
       ref->_number = ++alw_record_counter;
       ref->f3 = f3;

       return (void *)ref;
     }
    void * * f3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0007_rec3, "f3");
       return &((struct rec3 *)ref)->f3;
     }
    r = (void *)0;
r = rec3(alw_at(11,11), rec2(alw_at(11,16), rec1(alw_at(11,21), (void *)0)));
alw_assert(alw_at(13,6), alw_is(r, alw_0007_rec3));
alw_assert(alw_at(14,6), alw_is(*f3(alw_at(14,13), r), alw_0005_rec2));
alw_assert(alw_at(15,6), alw_is(*f2(alw_at(15,13), *f3(alw_at(15,16), r)), alw_0004_rec1));
alw_assert(alw_at(16,6), (*f1(alw_at(16,13), *f2(alw_at(16,16), *f3(alw_at(16,19), r))) == (void *)0));
; /*empty*/
}
}
}
}
alw_exit(alw_at(17,3), 0);
     return 0;
   }
   
