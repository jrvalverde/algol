#include "alw.h"

static const char * const alw_src = "Tests/records-0.alw";
static const char * const alw_0004_r3 = "r3";
static const char * const alw_0003_r2 = "r2";
static const char * const alw_0002_r1 = "r1";

   int main (int argc, char **argv) {
     alw_init(alw_at(14,0));
     {
{
const char *alw_class_r1 = alw_0002_r1;
     struct r1 {
       const char *_class;
       int _number;
       int f1;

     };
    const char *alw_class_r2 = alw_0003_r2;
     struct r2 {
       const char *_class;
       int _number;
       int f2;

     };
    const char *alw_class_r3 = alw_0004_r3;
     struct r3 {
       const char *_class;
       int _number;
       int f3;

     };
    auto struct r1 *r1(alw_loc loc, int f1);
auto int * f1 (alw_loc loc, void *ref);
auto struct r2 *r2(alw_loc loc, int f2);
auto int * f2 (alw_loc loc, void *ref);
auto struct r3 *r3(alw_loc loc, int f3);
auto int * f3 (alw_loc loc, void *ref);
void * x1;
void * x2;
void * x3;
struct r1 *r1(alw_loc loc, int f1) {
       struct r1 *ref = (struct r1 *)alw_allocate_record(loc, sizeof(struct r1));
       ref->_class = alw_0002_r1;
       ref->_number = ++alw_record_counter;
       ref->f1 = f1;

       return (void *)ref;
     }
    int * f1 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_r1, "f1");
       return &((struct r1 *)ref)->f1;
     }
    struct r2 *r2(alw_loc loc, int f2) {
       struct r2 *ref = (struct r2 *)alw_allocate_record(loc, sizeof(struct r2));
       ref->_class = alw_0003_r2;
       ref->_number = ++alw_record_counter;
       ref->f2 = f2;

       return (void *)ref;
     }
    int * f2 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_r2, "f2");
       return &((struct r2 *)ref)->f2;
     }
    struct r3 *r3(alw_loc loc, int f3) {
       struct r3 *ref = (struct r3 *)alw_allocate_record(loc, sizeof(struct r3));
       ref->_class = alw_0004_r3;
       ref->_number = ++alw_record_counter;
       ref->f3 = f3;

       return (void *)ref;
     }
    int * f3 (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_r3, "f3");
       return &((struct r3 *)ref)->f3;
     }
    x1 = (void *)0;
x2 = (void *)0;
x3 = (void *)0;
x1 = r1(alw_at(10,10), 1);
x2 = r2(alw_at(11,10), 3);
x3 = alw_ref_cast(alw_at(12,4), x2, alw_0002_r1, alw_0003_r2);
; /*empty*/
}
}
alw_exit(alw_at(14,0), 0);
     return 0;
   }
   
