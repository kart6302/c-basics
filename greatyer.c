#include<stdio.h>
void main ()
{
	float a,b,c,d;
	printf("enter four  numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is largest",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf ("%d is largest",b);
	}
	else if(c>a && b<c && c>d)
	{
    	printf ("%d is largest",c);
}
    else 
    {
    	printf ("%d is largest",d);
	}
}
	
