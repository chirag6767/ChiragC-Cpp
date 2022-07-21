#include <stdio.h>

void main()
{
	int i,n=9,sum=0;
	
	for(i=1;sum<=10;i++)
	{		
		printf("\n%d",i);
		sum += i ;// sum = sum + i; 			
	}
	printf("\nSum of Loop = %d",sum);
	
}