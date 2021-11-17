#include<stdio.h>
void main()
{
    int a,b;
	printf ("enter a and b values");
	scanf ("%d%d",&a,&b);
	a += b; // a=a+b b=b
	printf ("%d %d \n" ,a , b);
	a -= b; // a=a-b b=b
	printf ("%d %d \n" ,a , b);
	a *= b; // a=a*b b=b
	printf ("%d %d \n" ,a , b);
	a /= b; // a=a/b b=b
	printf ("%d %d \n" ,a , b);
	a %= b; // a=a%b b=b
	printf ("%d %d \n" ,a , b);
}
