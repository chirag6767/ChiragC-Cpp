#include <stdio.h>

void main()
{
	int i;
	printf("\nStart Loop");
	for(i=0;i<=10;i++)
	{		
		printf("\n%d",i);
		if(i==10)
		{
			printf("\nStop Loop");
		}
		
	}
	printf("\nout of loop");
}