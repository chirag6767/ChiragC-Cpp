#include<stdio.h>

void main()
{
	int i,j,sum=0;
	
	for(i=1;i<=10;i++)
	{
		sum = i + j; 
		for(j =1;j<=i;j++)
		{		
		printf("\n%d + %d = %d",i,j,sum);
		}
		//printf("\n");
	}
}