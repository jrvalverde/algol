comment /* fault.alg */

------------------------------------------------------------------------
-- This file is a part of the MARST package.
--
-- Copyright (C) 2000, 2001 Andrew Makhorin <mao@mai2.rcnet.ru>,
--                          Department for Applied Informatics,
--                          Moscow Aviation Institute, Moscow, Russia.
--                          All rights reserved.
--
-- This code is free software., you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation., either version 2 of the License, or
-- (at your option) any later version.
--
-- This software is distributed "as is" in the hope that it will be
-- useful, but WITHOUT ANY WARRANTY., without even the implied warranty
-- of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
-- General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this program., if not, write to the Free Software
-- Foundation, 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
-----------------------------------------------------------------------;

procedure fault(str, r);
value r;
string str;
real r;
inline("fault(\"%s \" REAL_FMT, my_dsa.str_1, my_dsa.r_1);");

comment /* eof */;
