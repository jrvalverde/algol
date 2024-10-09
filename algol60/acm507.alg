procedure quinat(integer value n1,n2; real array x,y,b,c,d,e,f(*));
   comment  quinat computes the coefficients of a quintic natural spline
      s(x) interpolating the ordinates y(i) at points x(i), i = n1
      through n2.  for xx in (x(i),x(i+1)) the value of the spline
      function s(xx) is given by the fifth degree polynomial:
      s(xx) = ((((f(i)*t+e(i))*t+d(i))*t+c(i))*t+b(i))*t+y(i)
      with t = xx - x(i).
      input:
        n1,n2  subscript of first and last data point respectively,
               it is required that n2 > n1 + 1,
        x,y(n1::n2)  arrays with x(i) as abscissa and y(i) as ordinate
               of the i-th data point.  the elements of the array x
               must be strictly monotone increasing (but see below for
               exceptions to this).
      output:
        b,c,d,e,f(n1::n2)  arrays collecting the coefficients of the
               quintic natural spline s(xx) as described above.
               specifically  b(i) = s'(x(i)),  c(i) = s"(x(i))/2,
               d(i) = s"'(x(i))/6,  e(i) = s""(x(i))/24,
               f(i) = s""'(x(i)+0)/120.  f(n2) is neither used or
               altered.  the arrays b,c,d,e,f must always be distinct.
      options:
        1.  the requirement that the elements of the array x be
            strictly monotone increasing can be relaxed to allow two
            or three consecutive abscissas to be equal and then
            specifying values of the first and second derivatives of
            the spline function at some of the interpolating points.
            specifically
            if x(j) = x(j+1) then s(x(j)) = y(j) and s'(x(j)) = y(j+1),
            if x(j) = x(j+1) = x(j+2) then in addition s"(x(j)) =y(j+2).
            note that s""(x) is discontinuous at a double knot and in
            addition s"'(x) is discontinuous at a triple knot.  at a
            double knot, x(j) = x(j+1), the output coefficients have the
            following values:
              b(j) = s'(x(j))      = b(j+1)
              c(j) = s"(x(j))/2    = c(j+1)
              d(j) = s"'(x(j))/6   = d(j+1)
              e(j) = s""(x(j)-0)/24    e(j+1) = s""(x(j)+0)/24
              f(j) = s""'(x(j)-0)/120  f(j+1) = s""'(x(j)+0)/120
            the representation of s(xx) remains valid in all intervals
            provided the redefinition y(j+1) := y(j) is made
            immediately after the call of the procedure quinat.  at a
            triple knot, x(j) = x(j+1) = x(j+2), the output coefficients
            have the following values:
              b(j) = s'(x(j))       = b(j+1) = b(j+2)
              c(j) = s"(x(j))/2     = c(j+1) = c(j+2)
              d(j) = s"'(x(j)-0)/6   d(j+1) = 0  d(j+2) = s"'(x(j)+0)/6
              e(j) = s""(x(j)-0)/24  e(j+1) = 0  e(j+2) = s""(x(j)+0)/24
              f(j) = s""'(x(j)-0)/120  f(j+1)=0  f(j+2)=s""'(x(j)+0)/120
            the representation of s(xx) remains valid in all intervals
            provided the redefinition y(j+2) := y(j+1) := y(j) is made
            immediately after the call of the procedure quinat.
          2. the array x may be monotone decreasing instead of
             increasing;
   if n2 > n1 + 1 then
   begin
      integer m;
      real b1,p,pq,pqqr,pr,p2,p3,q,qr,q2,q3,r,r2,s,t,u,v;
      comment coefficients of a positive definite, pentadiagonal
         matrix stored in d,e,f(n1+1::n2-2);
      m:=n2-2;
      q:=x(n1+1)-x(n1);  r:=x(n1+2)-x(n1+1);
      q2:=q*q;  r2:=r*r;  qr:=q+r;
      d(n1):=e(n1):=0.0;
      d(n1+1):=if q=0.0 then 0.0 else 6.0*q*q2/(qr*qr);
      for i:=n1+1 step 1 until m do
      begin
         p:=q;  q:=r;  r:=x(i+2)-x(i+1);
         p2:=q2;  q2:=r2;  r2:=r*r;  pq:=qr;  qr:=q+r;
         if q=0.0 then d(i+1):=e(i):=f(i-1):=0.0 else
         begin
            q3:=q2*q;  pr:=p*r;  pqqr:=pq*qr;
            d(i+1):=6.0*q3/(qr*qr);
            d(i):=d(i)+(q+q)*(15.0*pr*pr+(p+r)*q*(20.0*pr+7.0*q2)
                        +q2*(8.0*(p2+r2)+21.0*pr+q2+q2))/(pqqr*pqqr);
            d(i-1):=d(i-1)+6.0*q3/(pq*pq);
            e(i):=q2*(p*qr+3.0*pq*(qr+r+r))/(pqqr*qr);
            e(i-1):=e(i-1)+q2*(r*pq+3.0*qr*(pq+p+p))/(pqqr*pq);
            f(i-1):=q3/pqqr;
         end;
      end;
      if abs(r) > 0.0  then d(m):=d(m)+6.0*r*r2/(qr*qr);
      comment first and second order divided differences of the given
         function values,stored in b(n1+1::n2) and c(n1+2::n2)
         respectively, take care of double and triple knots;
      s:=y(n1);
      for i:=n1+1 step 1 until n2 do
      if x(i)=x(i-1) then b(i):=y(i) else
      begin
         b(i):=(y(i)-s)/(x(i)-x(i-1));
         s:=y(i);
      end;
      for i:n=n1+2 step 1 until n2 do
      if(x(i)=x(i-2) then
      begin c(i):=y(i)*0.5; b(i):=b(i-1) end
      else c(i):=(b(i)-b(i-1))/(x(i)-x(i-2));
      comment solve the linear system with c(i+2)-c(i+1)
         as right-hand side;
      if m > n1 then
      begin
         p:=c(n1):=e(m):=f(n1):=f(m-1):=f(m):=0.0;
         c(n1+1):=c(n1+3)-c(n1+2); d(n1+1):=1.0/d(n1+1);
      end;
      for i:=n1+2 step 1 until m do
      begin
         q:=d(i-1)*e(i-1);
      d(i):=1.0/(d(i)-p*f(i-2)-q*e(i-1));
         e(i):=e(i)-q*f(i-1);
         c(i):=c(i+2)-c(i+1)-p*c(i-2)-q*c(i-1);
         p:=d(i-1)*f(i-1);
      end;
      m:=n1+1;  c(n2-1):=c(n2):=0.0;
      for i:=n2-2 step -1 until m do
         c(i):=(c(i)-e(i)*c(i+1)-f(i)*c(i+2))*d(i);
      comment integrate the third derivative of s(x);
      m:=n2-1;
      q:=x(n1+1)-x(n1); r:=x(n1+2)-x(n1+1); b1:=(n1+1);
      q3:=q*q*q; qr:=q+r;
      v:=t:=if qr=0.0 then 0.0 else c(n1+1)/qr;
      f(n1):=if q=0.0 then 0.0 else v/q;
      for i:=n1+1 step 1 until m do
      begin
         p:=q;  q:=r;
         r:=if i=n2-1 then 0.0 else x(i+2)-x(i+1);
         p3:=q3;  q3:=q*q*q; pq:=qr;  qr=q+r;
         s:=r;  t:=if qr=0.0 then 0.0 else (c(i+1)-c(i))/qr;
         u:=v;  v:=t-s;
         if pq=0.0 then
         begin c(i):=0.5*y(i+1); d(i):=e(i):=f(i):=0.0 end
         else
         begin
            f(i):=if q=0.0 then f(i-1) else v/q;
            e(i):=5.0*s;
            d(i):=10.0*(c(i)-q*s);
            c(i):=d(i)*(p-q)+(b(i+1)-b(i)+(u-e(i))*p3
                  -(v+e(i))*q3)/pq;
            b(i):=(p*(b(i+1)-v*q3)+q*(b(i)-u*p3))/pq
                  -p*q*(d(i)+e(i)*(q-p));
      end;
      end i;
      comment end points x(n1) and x(n2);
      p:=x(n1+1)-x(n1); s:=f(n1)*p*p*p;
      e(n1):=d(n1):=0.0;
      c(n1):=c(n1+1)-10.0*s;
      c(n1):=b1-(c(n1)+s)*p;
      q:=x(n2)-x(n2-1);  t:=f(n2-1)*q*q*q;
      e(n2):=d(n2):=0.0;
      c(n2):=c(n2-1)+10.0*t;
      b(n2):=b(n2)+(c(n2)-t)*q;
   end quinat;
   procedure quineq(integer value n1,n2; real array y,b,c,d,e,f(*));
   comment  quineq computes the coefficients of a quintic natural spline
      s(x) interpolating the ordinates y(i) at equidistant points x(i),
      i = n1 through n2.  for xx in (x(i),x(i+1)) the value of the
      spline function s(xx) is given by the fifth degree polynomial:
      s(xx) = ((((f(i)*t+e(i))*t+d(i))*t+c(i))*t+b(i))*t+y(i)
      with t = (xx - x(i))/(x(i+1) - x(i)).
      input:
        n1, n2  subscript of first and last data point respectively,
                it is required that n2 > n1 + 1,
        y(n1::n2)  the given function values (ordinates).
      output:
        b,c,d,e,f(n1::n2)  arrays collecting the coefficients of the
                quintic natural spline s(xx) as described above.
                specifically b(i) = s'(x(i)), c(i) = s"(x(i))/2,
                 d(i) = s"'(x(i))/6,  e(i) = s""(x(i))/24,
                 f(i) = s""'(x(i)+0)/120.  f(n2) is neither used
                 nor altered.  the arrays y,b,c,d must always be
                 distinct.  if e and f are not wanted, the call
                 quineq(n1,n2,y,b,c,d,d,d) may be used to save storage
                 locations;
   if n2>n1+1 then
   begin
      integer n;
      real p,q,r,s,t,u,v;
      n:=n2-3;  p:=q:=r:=s:=t:=0.0;
      for i:=n1 step 1 until n do
      begin
         u:=p*r;  b(i):=1.0/(66.0-u*r-q);
         c(i):=r:=26.0-u;
         d(i):=y(i+3)-3.0*(y(i+2)-y(i+1))-y(i)-u*s-q*t;
         q:=p;  p:=b(i);  t:=s;  s:=d(i)
      end i;
      d(n+1):=n(n+2):=0.0;
      for i:=n step -1 until n1 do
         d(i):=(d(i)-c(i)*d(i+1)-d(i+2))*b(i);
      n:=n2-1; q:=0.0;  r:=t:=v:=d(n1);
      for i:=n1+1 step 1 until n do
      begin
         p:=q;  q:=r;  r:=d(i);  s:=t;
         f(i):=t:=p-q-q+r;
         e(i):=u:=5.0*(-p+q);
         d(i):=10.0*(p+q);
         c(i):=0.5*(y(i+1)+y(i-1)+s-t)-y(i)-u;
         b(i):=0.5*(y(i+1)-y(i-1)-s-t)-d(i)
      end i;
      f(n1):=v;  e(n1):=e(n2):=d(n1):=d(n2):=0.0;
      c(n1):=c(n1+1)-10.0*v;  c(n2):=c(n2-1)+10.0*t;
      b(n1):=y(n1+1)-y(n1)-c(n1)-v;  b(n2):=y(n2)-y(n2-1)+c(n2)-t
   end quineq;
   procedure quindf(integer value n1,n2; real array x,y,b,c,d,e,f(*));
   comment quindf computes the coefficients of a quintic natural spline
      s(x) for which the ordinates y(i) and the first derivatives b(i)
      are specified at points x(i), i = n1 through n2.  for xx in
      (x(i),x(i+1)) the value of the spline function s(xx) is given
      by the fifth degree polynomial:
      s(xx) = (((f(i)*t+e(i))*t+d(i))*t+c(i))*t+b(i))*t+y(i)
      with t = xx - x(i).
      input:
        n1, n2  subscript of first and last data point respectively,
                it is required that n2 > n1,
        x,y,b(n1::n2)  arrays with x(i) as abscissa, y(i) as ordinate
                and b(i) as first derivative at the i-th data point.
                the elements of the array x must be strictly monotone
                increasing or decreasing.
      output:
        c,d,e,f(n1::n2)  arrays collecting the coefficients of the
                quintic natural spline s(xx) as described above.
                e(n2) and f(n2) are neither used nor altered.  the
                arrays c,d,e,f must always be distinct;
   if n2 > n1 then
      begin
      integer  m2;
      real cc,g,h,hh,h2,hh2,p,pp,q,qq,r,rr;
      m2:=n2-1;  cc:=hh:=pp:=qq:=rr:=g:=0.0;
      for i:=n1 step 1 until m2 do
      begin
         h:=1.0/(x(i+1)-x(i));  h2:=h*h;  d(i):=3.0*(hh+h) - g*hh;
         p:=(y(i+1)-y(i))*h*h2;  q:=(b(i+1)+b(i))*h2;
         r:=(b(i+1)-b(i))*h2;
         c(i):=cc:=10.0*(p-pp) - 5.0*(q-qq) + r + rr + g*cc;
         g:=h/d(i);  hh:=h;  hh2:=h2;  pp:=p;  qq:=q;  rr:=r
      end i;
      c(n2):=(-10.0*pp + 5.0*qq + rr + g*cc)/(3.0*hh - g*hh);
      for i:=m2 step -1 until n1 do
      begin
         d(i+1):=1.0/(x(i+1)-x(i));  c(i):=(c(i) + c(i+1)*d(i+1))/d(i)
      end i;
      for i:=n1 step 1 until m2 do
      begin
         h:=d(i+1);  h2:=h*h;
         p:=(y(i+1)-y(i))*h*h2 - b(i)*h2 - c(i)*h;
         q:=(b(i+1)-b(i))*h2 - c(i)*(h+h);
         r:=(c(i+1)-c(i))*h;
         g:=q - 3.0*p;  rr:=r - 3.0*(p+g);  qq:= -rr - rr + g;
         f(i):=rr*h2;  e(i):=qq*h;  d(i):= -rr - qq + p
      end i;
      d(n2):=0.0
   end quindf;
