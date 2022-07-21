#include<stdio.h>

void main()
{
	int i = 0;
	
	do
	{
		printf("\t%d",i);
		i++;
		if(i>3)
		{
			break;
		}
	}while(i<=1000);
	printf("\n%d",i);
}