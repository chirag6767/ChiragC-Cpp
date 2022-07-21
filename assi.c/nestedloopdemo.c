#include<stdio.h>

void main()
{
	int i,j,t;
	
	for(i=1;i<=10;i++)
	{
		printf("Multiplication of %d : \n",i);
		for(j=1;j<=10;j++)
		{
		t = i * j;
			printf("%d X %d = %d\n",i,j,t);
		}
		printf("\n");
	}
	
}