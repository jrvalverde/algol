#include "alw.h"

static const char * const alw_src = "Tests/records-parameters.alw";
static const char * const alw_0004_rec3 = "rec3";
static const char * const alw_0003_rec2 = "rec2";
static const char * const alw_0002_rec1 = "rec1";

   int main (int argc, char **argv) {
     alw_init(alw_at(18,0));
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
auto void p(void * * (*v)(void));
void * r;
void * r2;
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
    void p(void * * (*v)(void)) {
{
{
if ((*v() != (void *)0))
 *v() = rec2(alw_at(9,29), 0);
; /*empty*/
}
}
 }
r = (void *)0;
r2 = (void *)0;
r = rec1(alw_at(15,8), 0);
{
void * * _p_arg1(void){ return &r; }
p(_p_arg1);
}
alw_assert(alw_at(17,3), alw_is(r, alw_0003_rec2));
; /*empty*/
}
}
alw_exit(alw_at(18,0), 0);
     return 0;
   }
   
