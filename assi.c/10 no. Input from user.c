#include<stdio.h> 
 
int main() 
{ 
	int sum=0,num; 
	printf("Enter 10 numbers : "); 
	for(int i=0;i<10;i++) 
	{ 
		scanf("%d",&num); 
		sum+=num; 
	} 
	printf("Sum = %d",sum); 
} 