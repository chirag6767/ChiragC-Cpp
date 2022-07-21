#include<stdio.h>

void main()
{
	int a;
	again:
	printf("\nEnter A : ");
	scanf("%d",&a);
	if(a==0)
	{
		goto exit;
	}
	printf("A = %d",a);
	goto again;

	exit:
	printf("\n Sorry you have entered 0");	
	

}