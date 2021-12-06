#include<stdio.h>
void main()
{
	int n1,n2;
	printf ("enter two number");
	scanf("%d%d",&n1,&n2);
	if(n1 >n2)
	{
		printf ("%d is bigger than %d",n1,n2);
	}
	else
	{
		printf ("%d is bigger than %d",n2,n1);
	}
}
