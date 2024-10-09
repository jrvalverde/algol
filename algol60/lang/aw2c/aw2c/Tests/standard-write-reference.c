#include "alw.h"

static const char * const alw_src = "Tests/standard-write-reference.alw";
static const char * const alw_0004_y = "y";
static const char * const alw_0003_x = "x";

   int main (int argc, char **argv) {
     alw_init(alw_at(17,0));
     {
{
const char *alw_class_x = alw_0003_x;
     struct x {
       const char *_class;
       int _number;
       int i;

     };
    const char *alw_class_y = alw_0004_y;
     struct y {
       const char *_class;
       int _number;
       int j;

     };
    auto struct x *x(alw_loc loc, int i);
auto int * i (alw_loc loc, void *ref);
auto struct y *y(alw_loc loc, int j);
auto int * j (alw_loc loc, void *ref);
void * a;
void * b;
void * c;
void * d;
void * e;
struct x *x(alw_loc loc, int i) {
       struct x *ref = (struct x *)alw_allocate_record(loc, sizeof(struct x));
       ref->_class = alw_0003_x;
       ref->_number = ++alw_record_counter;
       ref->i = i;

       return (void *)ref;
     }
    int * i (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0003_x, "i");
       return &((struct x *)ref)->i;
     }
    struct y *y(alw_loc loc, int j) {
       struct y *ref = (struct y *)alw_allocate_record(loc, sizeof(struct y));
       ref->_class = alw_0004_y;
       ref->_number = ++alw_record_counter;
       ref->j = j;

       return (void *)ref;
     }
    int * j (alw_loc loc, void *ref) {
       alw_ref_field_check(loc, ref, alw_0004_y, "j");
       return &((struct y *)ref)->j;
     }
    a = (void *)0;
b = (void *)0;
c = (void *)0;
d = (void *)0;
e = (void *)0;
a = x(alw_at(9,8), 0);
b = y(alw_at(10,8), 0);
c = y(alw_at(11,8), 0);
d = c;
e = (void *)0;
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(14,3), 2);
alw_write_string(alw_at(14,3), (alw_str)"These should be different: ", 27);
alw_write_reference(alw_at(14,3), a);
alw_write_reference(alw_at(14,3), b);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(15,3), 2);
alw_write_string(alw_at(15,3), (alw_str)"These should be the same:  ", 27);
alw_write_reference(alw_at(15,3), c);
alw_write_reference(alw_at(15,3), d);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(16,3), 2);
alw_write_string(alw_at(16,3), (alw_str)"This should be \"null\":     ", 27);
alw_write_reference(alw_at(16,3), e);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}
alw_exit(alw_at(17,0), 0);
     return 0;
   }
   
