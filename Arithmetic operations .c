#include <stdio.h>
void main ()
{
	int a,b,s,d,p,q,r;
	a = 11;
	b = 2;
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b; 
	r = a%b;
	printf("sum of %d and %d is %d:\n",a,b,s);
	
	printf ("difference of %d and %d is %d:\n",a,b,d);
	
	printf ("ptoduct of %d and %d is %d:\n",a,b,p);
	
	printf ("quotient of %d and %d is %d:\n",a,b,q);
	
	printf ("remainder of %d and %d is %d :\n",a,b,r);
}
