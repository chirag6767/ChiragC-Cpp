#include<stdio.h>

void main()
{
int i = 1; //initialization
while(i<=1000)
{
	
	printf("\t%d",i);
	i++;	
	if(i>3)
	{	
		break;
	}
}
printf("\nout of loop")	;
	
}