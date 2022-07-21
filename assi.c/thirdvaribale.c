//Swapping of numbers 
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter numbers x and y:");
	scanf("%d %d",&x,&y);
	printf("\n Numbers before swapping : %d %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n Numbers after swapping : %d %d",x,y);
	
}