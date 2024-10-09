
comment QuadI is useful when integration of several func-
        tions of same limits at same time using same
        point rule is desired. The interval (a, b) is di-
        vided into m equal subintervals for an n-point
        quadrature integration. p is the number of func-
        tions to be integrated. W[k] and u[k] are normalized
        weights and abscissas respectively, where
        k = 1, 2, 3, ..., n. u[k] must be in ascending order.
        P(B,j) =: (c) is a procedure which must be sup-
        plied by the programmer. It evaluates (c) the
        function (as indicated by j) for B. I[j] is the result
        of integration for function j.;

procedure QuadI (real a, b, m, n, p, w[k], u[k], P(B,j) =:(c)) =: (I[j])
          begin

QuadI:          h := (b - a) / m
          for   j := 1 (1) p; I[j] := 0
                A := a - h / 2
          for   i := 1(1)m
L1:       begin A := A + h
          for   k := 1 (1) n
L2:       begin B := A + (h / 2) * u[k]
          for   j :=1 (1) p
L3:       begin P(B,j) =:(c)
                I[j] := I[j] + W[k] * c end L3 ; end L2
                  end L
          for   j := 1 (1) p
                I[j] := (h / 2) * I[j]
          return
          integer (j, k, i)
          end   QuadI


