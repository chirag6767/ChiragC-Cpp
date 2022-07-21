#include<stdio.h>

void main()
{
	int a = 1,b=8;
	
	if(a&&b)
	{
		printf("\nLine 1 Condition is True");
	}
	else
	{
		printf("\nLine 2 Condition is False");
	}
	
	b= 0;
	
	if(a&&b)
	{
		printf("\nLine 3 Condition is True");
	}
	else
	{
		printf("\nLine 4 Condition is False");
	}     
	
	a = 0;
	if(a||b)
	{
		printf("\nLine 5 Condition is True");
	}
	else
	{
		printf("\nLine 6 Condition is False");
	}
	
	if(a&&b)
	{
		printf("\nLine 7 Condition is True");
	}
	else
	{
		printf("\nLine 8 Condition is False");
	}
	
	
}