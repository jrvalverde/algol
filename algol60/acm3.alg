procedure
BAIRSTOW  (n, a[], eps0, eps1, eps2, eps3, K) =:
          (m, x[], y[], nat[], ex[]);

comment The Bairstow-Hitchcock iteration is used to find
        successively pairs of roott of a polynomial
        equation of degree n with coefficients a[i]
        (i = 0, 1, ... n), where a[n] is the constant term. On
        exit from the procedure, m is the number of pairs
        of roots found, x[i] and y[i] (i=1, ..., m) are
        a pair of real roots if nat[i] = 1, the real and imagi-
        nary parts of a complex pair if nat[i] = -1, and
        ex[i] indicates which of the following conditions
        was met to exit from the iteration loop in finding
        this pair:
          1. Remainders, r1, r0, become absolutely less
             than eps1.
          2. Corrections, incrp, incrq, become absolutely
             less than  eps2.
          3. The ratios, incrp/p, incrq/q, become ab-
             solutely less than eps3.
          4. The number of iterations becomes K.
        In the last case, the pair of roots found is not
        reliable and no further effort to find additional
        roots is made. The quantity eps0 is used as a
        lower bound for the denominator in the expres-
        sions from which incrp and incrq are found.;

begin
integer (i, j, k, n1, n2, m1) ;
array   (b, c[0 : n + 1]) ;
BAIRSTOW:
        for i:= 0 (1) n ; b[i] := a[i]
        b[n+1] := 0 ; n2 := entire((n + 1) / 2);
        n1 := 2 * n2;
        for m1 := 1 (1) n2 ; begin p := 0 ; q := 0;
        for k := 1 (1) K ; begin
step:   for i := 1 (1) n1 ; c[i] := b[i];
        for j := n1 - 2, n1 - 4 ; begin
        for i := 0 (1) j ; begin
        c[i+1] := c[i+1] - p * c[i]
        c[i+2] := c[i+2] - q * c[i] end end
        r0 := c[n1] ; r1 := c[n1 - 1]
        s0 := c[n1 - 2] ; s1 := c[n1 - 3]
        v0 := -q * s1 ; v1 := s0 - s1 * p
        det0 := v1 * s0 - v0 * s1
        if (abs(det0) < eps0) ; begin
        p := p + 1 ; q := q + 1 ; go to step end
        det1 := s0 * r1 - s1 * r0
        det2 := r0 * v1 - v0 * s1
        incrp := det1 / det0 ; incrq := det2 / det0
        p := p + incrp ; q := q + incrq
        if (abs(r0) < eps1) ; begin
        if (abs(r1) < eps1) ; begin
        ex[m1] := 1 ; go to next end end
        if (abs(incrp) < eps2) ; begin
        if (abs(incrq) < eps2) ; begin
        ex[m1] := 2 ; goto next end end
        if (abs(incrp / p) < eps3) ; begin
        if (abs(incrq / q) < eps3) ; begin
        ex[m1] := 3 ; go to next end end end
        ex[m1] := 4
next:   S := p/2 ; T := (S * S) - q
        if (T >= 0) ; begin T := sqrt(T)
        nat[m1] := 1 ; x[m1] := S + T
        y[m1] := S - T end
        if (T < 0) ; begin nat[m1] := -1 ; x[m1] := S
        y[m1] := sqrt(-T) end
        if (ex[m1] := 4) ; go to out
        for j := 0 (1) (n1 - 2) ; begin
        b[j+1] := b[j+1] - p * b[j]
        b[j+2] := b[j+2] - q * b[j] ; end
        n1 := n1 - 2 ; if (n1 < 1)
out:    begin m := m1 ; return end
        if (n1 < 3) ; begin
        m1 := m1 + 1 ; ex[m1] := 1
        p := b[1] / b[0] ; q := b[2] / b[0]
        go to next end
end end

