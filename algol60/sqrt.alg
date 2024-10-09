begin
comment cálculo de raíz cuadrada de 2 ;

    real x ;
    integer n, m;

    x := 1;
    inreal (0, n );
    for m := 1 step 1 until n do
    	begin
	    x := ( x / 2 ) + ( 1 / x );
	    outreal( 1, x );
	    outstring(1, "\n");
	end;
end
