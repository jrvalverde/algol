begin
comment EVALUATION OF THE CHEBYSHEV POLYNOMIAL Tn(X)
    	BY RECURSION
 	G. M. GALLER
 	National Bureau of Standards, Washington 25, D. C. ;


comment this procedure computes the Chebyshev
    	polynomial Tn(X) = cos ( n x cos^-1(X)) for
	any given real argument, X, and any order, n,
	by the recursion formula below;

real procedure Ch(n, X) ;
real X ;
integer n ;
begin
    real a, b, c ;
    integer i ;
    
    a := 1 ; b := X ;
    if n = 0 then 
    	c := a 
    else if n = 1 then
    	c := b
    else 
    	for i := 2 step 1 until n do
	begin
	    c := 2 * X * b - a ;
	    a := b ;
	    b := c
	end ;
    Ch := c
end ;

outreal(1, Ch(0, .01)) ; 
outreal(1, Ch(0, .2)) ;
outreal(1, Ch(0, .7)) ;
outreal(1, Ch(0, 1.3)) ;
outstring(1, "\n") ;

outreal(1, Ch(1, .01)) ;
outreal(1, Ch(1, .2)) ;
outreal(1, Ch(1, .7)) ;
outreal(1, Ch(1, 1.3)) ;
outstring(1, "\n") ;

outreal(1, Ch(4, .01)) ;
outreal(1, Ch(4, .2)) ;
outreal(1, Ch(4, .7)) ;
outreal(1, Ch(4, 1.3)) ;
outstring(1, "\n") ;

outreal(1, Ch(8, .01)) ;
outreal(1, Ch(8, .2)) ;
outreal(1, Ch(8, .7)) ;
outreal(1, Ch(8, 1.3)) ;
outstring(1, "\n") ;

end 
