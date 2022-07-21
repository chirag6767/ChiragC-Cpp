#include<stdio.h>

void main()
{
	int i,sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
		sum +=i;
		if(i==9)
		{
			goto add;
		}		
	}
	add:
	printf("\nSum = %d",sum);
	
}