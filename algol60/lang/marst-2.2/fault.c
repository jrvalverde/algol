/* fault.c */

/* generated by GNU MARST -- Algol-to-C Translator, Version 2.2 */

#include "algol.h"

extern struct desc fault_0 /* precompiled void procedure */
(     struct arg /* str: by name string */,
      struct arg /* r: by value real */
);

struct dsa_fault_0
{     /* procedure fault (level 0) declared at line 26 */
      char *proc;
      char *file;
      int line;
      struct dsa *parent;
      struct dsa *vector[0+1];
      /* level of innermost block = 1 */
      struct mem *old_top_0;
      struct mem *new_top_0;
      struct mem *old_top_1;
      struct mem *new_top_1;
      /* procedure block 1 (level 0) beginning at line 26 */
      struct desc retval;
      /* str: by name string
         specified at line 28 and never referenced */
      char *str_1;
      /* r: by value real
         specified at line 29 and never referenced */
      double r_1;
      /* local block 2 (level 1) beginning at line 30 */
};

struct desc fault_0 /* precompiled void procedure */
(     struct arg str_1 /* by name string */,
      struct arg r_1 /* by value real */
)
{     struct dsa_fault_0 my_dsa;
      register struct dsa_fault_0 *dsa_0 = &my_dsa;
      my_dsa.proc = "fault";
      my_dsa.file = "fault.alg";
      my_dsa.line = 26;
      my_dsa.parent = active_dsa, active_dsa = (struct dsa *)&my_dsa;
      my_dsa.vector[0] = (void *)dsa_0;
      /* start of procedure block 1 (level 0) at line 26 */
      dsa_0->old_top_0 = stack_top;
      my_dsa.str_1 = str_1.arg1;
      my_dsa.line = 29;
      my_dsa.r_1 = get_real((global_dsa = r_1.arg2, (*(struct desc (*)(
         void))r_1.arg1)()));
      dsa_0->new_top_0 = stack_top;
      /* start of local block 2 (level 1) at line 30 */
      dsa_0->old_top_1 = stack_top;
      dsa_0->new_top_1 = stack_top;
      dsa_0->line = 30;
      /* inline code */
      fault("%s " REAL_FMT, my_dsa.str_1, my_dsa.r_1);
      pop_stack(dsa_0->old_top_1);
      /* end of block 2 */
      pop_stack(dsa_0->old_top_0);
      /* end of block 1 */
      my_dsa.retval.lval = 0;
      my_dsa.retval.type = 0;
      active_dsa = my_dsa.parent;
      return my_dsa.retval;
}

/* eof */
