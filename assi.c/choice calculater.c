#include<stdio.h>

void main()
{
	int a=10;
	int b=20;
	int c;
	
	printf("\n\n A = %d",a);
    printf("\n\n B = %d",b);
    c=a+b;
    
    printf("\n\n Addition       =   %d",a+b);
    printf("\n\n Subtraction    =   %d",a-b);
    printf("\n\n Multiplication =   %d",a*b);
    printf("\n\n Division       =   %.2f",a/(float)b);
    printf("\n\n C = %d",c);
    
}