/* algol.h */

/*----------------------------------------------------------------------
-- This file is a part of the MARST package.
--
-- Copyright (C) 2000, 2001 Andrew Makhorin <mao@mai2.rcnet.ru>,
--                          Department for Applied Informatics,
--                          Moscow Aviation Institute, Moscow, Russia.
--                          All rights reserved.
--
-- This code is free software; you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation; either version 2 of the License, or
-- (at your option) any later version.
--
-- This software is distributed "as is" in the hope that it will be
-- useful, but WITHOUT ANY WARRANTY; without even the implied warranty
-- of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
-- General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this program; if not, write to the Free Software
-- Foundation, 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
----------------------------------------------------------------------*/

#ifndef _ALGOL_H
#define _ALGOL_H

#include <float.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int bool;
/* this type is used to represent Boolean quantities */

#define true  1
#define false 0

struct dsa
{     /* procedure DSA (Dynamic Storage Area) */
      char *proc;
      /* procedure identifier */
      char *file;
      /* source file name */
      int line;
      /* source line number */
      struct dsa *parent;
      /* pointer to DSA of calling (parent) procedure */
      struct dsa *vector[/* procedure level + 1 */ 1];
      /* procedure display (display is a list of pointers to DSA of
         those procedures that encloses this procedure); last entry in
         display points to DSA of this procedure */
      /* additional DSA members for each individual procedure are
         located here */
};

struct mem
{     /* descriptor of dynamically allocated memory block */
      int size;
      /* size of block in bytes (excluding descriptor) */
      struct mem *ptr;
      /* pointer to previous memory block descriptor in stack */
      char body[/* size */ 1];
      /* block body of size bytes long */
};

struct label
{     /* value of label to perform global go to */
      void *jump; /* -> jmp_buf */
      /* pointer to environment block (jmp_buf) that defines a locus in
         that block where label is placed */
      int kase;
      /* sequential number of label in the appropriate block */
};

struct arg { void *arg1, *arg2; };
/* formal parameter descriptor (any actual parameter is passed as value
   of struct arg type) */

struct desc
{     /* returned value descriptor (value returned by thunk routine or
         procedure is value of struct desc type) */
      int lval;
      /* lvalue flag:
         0 - it is a value (assignment is NOT allowed)
         1 - it is an address of variable (assignment is allowed) */
      int type;
      /* type flag:
         0   - no type (returned by typeless procedure)
         'r' - real
         'i' - integer
         'b' - Boolean
         'l' - label (in case of designational expression) */
      union
      {  double *real_ptr;    /* address of real variable */
         int *int_ptr;        /* address of integer variable */
         bool *bool_ptr;      /* address of Boolean variable */
         double real_val;     /* value of real type */
         int int_val;         /* value of integer type */
         bool bool_val;       /* value of Boolean type*/
         struct label label;  /* value of label type */
      } u;
};

struct dv
{     /* array dope vector */
      void *base;
      /* address of the first array element */
      int n;
      /* number of subscripts (1 <= n <= 9) */
      struct
      {  int lo;
         /* lower bound of subscript */
         int up;
         /* upper bound of subscript (if lo > up then array is empty
            and in this case base is NULL) */
      }  d[9];
      /* subscript bounds for each dimension (actually d[n] used) */
};

extern struct mem *stack_top;
/* pointer to memory block descriptor in the top of stack */

extern struct dsa *active_dsa;
/* pointer to DSA of procedure that is running at this time */

extern struct dsa *global_dsa;
/* pointer to DSA that contains display of surround procedure (implicit
   parameter passed to any procedure, thunk, or switch routine) */

/* relational operators should call arguments only once */

#define less(x, y)         ((x) <  (y) ? true : false)
#define notgreater(x, y)   ((x) <= (y) ? true : false)
#define equal(x, y)        ((x) == (y) ? true : false)
#define notless(x, y)      ((x) >= (y) ? true : false)
#define greater(x, y)      ((x) >  (y) ? true : false)
#define notequal(x, y)     ((x) != (y) ? true : false)

/* logical operators should call arguments only once and should avoid
   "lazy" calculations specific for the C (so use "bitwise" operators
   instead logical ones) */

#define equiv(x, y)        equal(x, y)
#define impl(x, y)         or(not(x), y)
#define or(x, y)           ((x) | (y))
#define and(x, y)          ((x) & (y))
#define not(x)             ((x) ? false : true)

extern int real2int(double x);
extern double int2real(int x);
extern double expr(double x, double r);
extern int expi(int i, int j);
extern double expn(double x, int n);
extern double get_real(struct desc x);
extern int get_int(struct desc x);
extern bool get_bool(struct desc x);
extern struct label get_label(struct desc x);
extern double set_real(struct desc x, double val);
extern int set_int(struct desc x, int val);
extern bool set_bool(struct desc x, bool val);
extern struct arg make_arg(void *arg1, void *arg2);
extern struct label make_label(void *jump, int kase);
extern void go_to(struct label x);

extern void pop_stack(struct mem *top);
extern struct dv *alloc_array(int type, int n, ...);
extern struct dv *alloc_same(int type, struct dv *dope);
extern struct dv *own_array(int type, int n, ...);
extern struct dv *own_same(int type, struct dv *dope);
extern struct dv *copy_real(struct arg arg);
extern struct dv *copy_int(struct arg arg);
extern struct dv *copy_bool(struct arg arg);
extern double *loc_real(struct dv *dv, int n, ...);
extern int *loc_int(struct dv *dv, int n, ...);
extern bool *loc_bool(struct dv *dv, int n, ...);

#define REAL_FMT "%.12g"
/* format used to output real quantities */

extern void fault(char *fmt, ...);
extern int inchar(int channel);
extern void outchar(int channel, int c);
extern void outstring(int channel, char *str);
extern int ininteger(int channel);
extern void outinteger(int channel, int val);
extern double inreal(int channel);
extern void outreal(int channel, double val);

extern void print(int n, ...);

#endif

/* eof */
