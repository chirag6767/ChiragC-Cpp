#include <stdio.h>

void main()
{
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(k=1;k<=10-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}