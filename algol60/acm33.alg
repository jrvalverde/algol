begin
comment FACTORIAL
    	M. F. Lipp
 	RCA Digital Computation and Simulation Group
 	Moorestow, New Jersey ;
    
    real procedure Factorial(n);
    value n ;
    integer n ;
    comment This procedure makes use of the implicitly defined
    	    recursive property of Algol to compute n! ;
    begin
    	Factorial := if n = 0 then 1.0 else n * Factorial(n - 1)
    end ;
    
    outreal(1, Factorial(5) ) ;
    outstring(1, "\n")
end
