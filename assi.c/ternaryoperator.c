#include<stdio.h>

void main()
{
	int a = 43, b= 76,max;
	if(a > b)
	{
		printf("%d is Greater",a);
	}
	else
	{
		printf("%d is Greater",b);
	}
	
	max = (a>b)?a:b;
	printf("\nMax is %d",max);

}