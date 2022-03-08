#include<stdio.h>
void main()
{
	int n,r,sum,temp; 
	printf ("enter a number");
	scanf ("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum =sum +(r*r*r);
		n=n/10;
	}
	if (temp=sum)
	printf("abstract number");
	else
	printf("not a abstract number");
}
