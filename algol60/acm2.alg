comment This procedure computes a value of g=x satis-
        fying the equation x = f(x). The procedure calling
        statement gives the function, an initial approxi-
        mation a=/= 0 to the root, and a tolerance
        parameter Epsilon for determining the number of sig-
        nificant figures in the solution. This accelerated
        iteration or secant method is described by the
        author in _Communications_, June, 1958.;

procedure Root(f(), a, Epsilon) =: (g)
begin
Root:   b := a ; c := f(b) ; g := c
        if (c = a) ; return
        d := a ; b := c ; e := c
Hob:    c := f(b)
        g := (d * x - b * e) / (c - e - b + d)
        if (abs((g - b) / g) <= Epsilon) ; return
        e := c ; d := b ; b := g ; go to Hob
end

