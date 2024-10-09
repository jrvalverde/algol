/* abs.c */

/* generated by GNU MARST -- Algol-to-C Translator, Version 2.2 */

#include "algol.h"

extern struct desc abs_0 /* precompiled real procedure */
(     struct arg /* E: by value real */
);

struct dsa_abs_0
{     /* procedure abs (level 0) declared at line 26 */
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
      /* E: by value real
         specified at line 28 and first referenced at line 29 */
      double E_1;
      /* local block 2 (level 1) beginning at line 29 */
};

struct desc abs_0 /* precompiled real procedure */
(     struct arg E_1 /* by value real */
)
{     struct dsa_abs_0 my_dsa;
      register struct dsa_abs_0 *dsa_0 = &my_dsa;
      my_dsa.proc = "abs";
      my_dsa.file = "abs.alg";
      my_dsa.line = 26;
      my_dsa.parent = active_dsa, active_dsa = (struct dsa *)&my_dsa;
      my_dsa.vector[0] = (void *)dsa_0;
      /* start of procedure block 1 (level 0) at line 26 */
      dsa_0->old_top_0 = stack_top;
      my_dsa.line = 28;
      my_dsa.E_1 = get_real((global_dsa = E_1.arg2, (*(struct desc (*)(
         void))E_1.arg1)()));
      dsa_0->new_top_0 = stack_top;
      /* start of local block 2 (level 1) at line 29 */
      dsa_0->old_top_1 = stack_top;
      dsa_0->new_top_1 = stack_top;
      dsa_0->line = 29;
      dsa_0->retval.u.real_val = ((notless(dsa_0->E_1, .0)) ? (
         dsa_0->E_1) : (-dsa_0->E_1));
      pop_stack(dsa_0->old_top_1);
      /* end of block 2 */
      pop_stack(dsa_0->old_top_0);
      /* end of block 1 */
      my_dsa.retval.lval = 0;
      my_dsa.retval.type = 'r';
      active_dsa = my_dsa.parent;
      return my_dsa.retval;
}

/* eof */
