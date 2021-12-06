#include<stdio.h>
void main()
{
	int n;
	printf ("enter n value");
	scanf ("%d",&n);
	if(n%3==0 && n%7==0)
	{
	printf ("%d is divisable with both 3 & 7",n);
	}
	else
	{
	printf ("%d is not divilable with both 3 & 7",n);
	}
}
