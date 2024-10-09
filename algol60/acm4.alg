comment This procedure evaluates a function at the end-points
    	of a real interval, switching to an error exit (fools
	exit) FLSXT if there is no change of sign. Otherwise
	it finds a root by iterated bisection and evaluation
	at the midpoint, halting if either the value of the
	function is less than the free variable epsilon or two suc-
	cessive approximations of the root differ by less
	than epsilon1. Epsilon should be chosen of the order of error in
	evaluating the function (otherwise time would be
	wasted), and epsilon1 of the order of the desired accuracy. Epsilon1
	must not be less than two units in the last place
	carried by the machine or else indefinite cycling will
	occur fue to round-off on bisection. Although this 
	method is of 0 order, and therefore among the slow-
	est, it is applicable to any continuous function. The
	fact that no diferentiability conditions have to be
	checked makes it, therefore, and 'old work-horse'
	among routines for finding real roots which have
	already been isolated. The free variables y1 and y2
	are (presumably) the end-points of an interval within
	which there is an off number of roots of the real
	function F. Alpha is the temporary exit for the evalua-
	tion of F. ;

procedure Bisec (y1, y2, epsilon, epsilon1, F, FLSXT) =: (x)
begin

Bisec:	    i := 1 ; j := 1 ; k := 1 ; x:= y2 
alpha:	    f := F(x) ; if (abs(f) <= epsilon) ; return
    	    go to gamma[i]
First val:  i := 2 ; f1 := f ; x := y1 ; go to alpha
Suuc val:   if (sign(f) = sign(f1)) ; go to delta[j] ; goto eta[k] 
Sec val:    j := 2 ; k := 2
Midpoint:   x := y1 / 2 + y2 / 2 ; go to alpha
Reg delta:  y2 := x
Precision:  if (abs(y1 - y2) >= epsilon1) ; go to Midpoint
    	    return
Reg eta:    y1 := x ; go to Precision
    	    integer(i, j, k)
	    switch gamma := (First val, Succ val)
	    switch delta := (FLSXT, Reg delta)
	    switch eta := (Sec val, Reg eta)
end Bisec


