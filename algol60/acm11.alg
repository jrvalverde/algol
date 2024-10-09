begin

comment EVALUATION OF THE HERMITE POLYNOMIAL Hn(X)
    	BY RECURSION
    	G. M. Galler
 	National Bureau of Standards, Washington 25, D. C.
	;

    comment This procedure computes the Hermite polynomial.
                         2                2
                    n   x      n     n  -x
    	H (X) = (-1) · e   · (d  / dX (e   ))
	 n
 	for any given real argument, X, and any order, n, by
 	the recursion formula below ;

    real procedure He(n, X) ;
    integer n ;
    real X ;
    begin
    	real a, b, c ;
	integer i ;
	
	a := 1 ;
	b := 2 * X ;
	if n = 0 then
	    c := a
	else if n = 1 then
	    c := b
	else for i := 1 step 1 until n - 1 do
	begin
	    c := 2 * X * b - 2 * i * a ;
	    a := b ; 
	    b := c 
	end ;
	He := c
    end ;
    
    
    outreal(1, He(3, 2.5)) ; outstring(1, "\n")
end
