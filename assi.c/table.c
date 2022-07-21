#include<stdio.h>

void main()
{
	int i,n,t;
	printf("\nEnter No.");	
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		t = n * i;
		printf("\n%d X %d = %d",n,i,t);
	}
}