#include<stdio.h>
void main()
{
	int m;
	printf ("Enter total marks");
	scanf ("%d",&m);
	if(m>=80)
	{
	printf ("A grade");
	}
	else if(70<=m )
	{
     	printf("B grade");
	}
	else if (60<=m )
	{
		printf("C grade");
	}
	else if (50<=m)
	{
	    printf ("D grade");
    }
    else 
    {
   	printf ("fail");
	}    
}