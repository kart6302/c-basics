#include<stdio.h>
void main()
{
	int age;
	printf ("enter age of the person");
	scanf ("%d",&age);
	if( age >= 18 )
	{
		printf("The person is eligible for vote");
	}
	else
	{
		printf (" The person is not elible for vote");
	}
}
