#include<stdio.h>
void main()
{
	int a,b,c;
	printf ("enter three values of a,b & c ");
	scanf ("%d%d%d",&a,&b,&c);
	printf ("given numbers %d %d %d\n",a ,b,c);
	a += b;
	printf ("after add and assign a,b,c is %d %d %d \n",a,b,c);
	b -= c;
	printf ("after subtract and assign a,b,c is %d %d %d \n",a,b,c);
	c *= a;
	printf ("after multipe and assign a,b,c is %d %d %d \n",a,b,c);
	a /= b;
	printf ("after devide and assign a,b,c is %d %d %d \n",a,b,c);
	b *= c;
	printf ("after multiple and assign a,b,c is %d %d %d \n",a,b,c);
	a += b;
	printf ("after add and assign a,b,c is %d %d %d \n",a,b,c);
	
}
