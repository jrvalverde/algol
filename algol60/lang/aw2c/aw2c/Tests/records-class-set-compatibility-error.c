#include "alw.h"

static const char * const alw_src = "Tests/records-class-set-compatibility-error.alw";
static const char * const alw_0005_rec5 = "rec5";
static const char * const alw_0004_rec4 = "rec4";
static const char * const alw_0003_rec3 = "rec3";
static const char * const alw_0002_rec2 = "rec2";

   int main (int argc, char **argv) {
     alw_init(alw_at(11,3));
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
    const char *alw_class_rec5 = alw_0005_rec5;
     struct rec5 {
       const char *_class;
       int _number;
       int f5;

     };
    auto struct rec2 *rec2(alw_loc loc, int f2);
auto int * f2 (alw_loc loc, void *ref);
auto struct rec3 *rec3(alw_loc loc, int f3);
auto int * f3 (alw_loc loc, void *ref);
auto struct rec4 *rec4(alw_loc loc, int f4);
auto int * f4 (alw_loc loc, void *ref);
auto struct rec5 *rec5(alw_loc loc, int f5);
auto int * f5 (alw_loc loc, void *ref);
void * r234;
void * r45;
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
    struct rec5 *rec5(alw_loc loc, int f5) {
       struct rec5 *ref = (struct rec5 *)alw_allocate_record(loc, sizeof(struct rec5));
       ref->_class = alw_0005_rec5;
       ref->_number = ++alw_record_counter;
       ref->f5 = f5;

       return (void *)ref;
     }
    int * f5 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0005_rec5, "f5");
       return &((struct rec5 *)ref)->f5;
     }
    r234 = (void *)0;
r45 = (void *)0;
r45 = rec5(alw_at(10,10), 0);
r234 = alw_ref_cast(alw_at(11,3), r45, alw_0002_rec2, alw_0003_rec3, alw_0004_rec4);
}
}
alw_exit(alw_at(11,3), 0);
     return 0;
   }
   
