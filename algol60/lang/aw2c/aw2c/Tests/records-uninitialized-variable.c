#include "alw.h"

static const char * const alw_src = "Tests/records-uninitialized-variable.alw";
static const char * const alw_0002_rec = "rec";

   int main (int argc, char **argv) {
     alw_init(alw_at(4,4));
     {
{
const char *alw_class_rec = alw_0002_rec;
     struct rec {
       const char *_class;
       int _number;
       int f;

     };
    auto struct rec *rec(alw_loc loc, int f);
auto int * f (alw_loc loc, void *ref);
void * r;
struct rec *rec(alw_loc loc, int f) {
       struct rec *ref = (struct rec *)alw_allocate_record(loc, sizeof(struct rec));
       ref->_class = alw_0002_rec;
       ref->_number = ++alw_record_counter;
       ref->f = f;

       return (void *)ref;
     }
    int * f (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0002_rec, "f");
       return &((struct rec *)ref)->f;
     }
    r = (void *)0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(4,4), 2);
alw_write_integer(alw_at(4,4), *f(alw_at(4,10), r));

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(4,4), 0);
     return 0;
   }
   
