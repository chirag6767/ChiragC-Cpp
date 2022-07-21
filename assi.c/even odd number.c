#include<stdio.h>

int main()
{
   int n;
   printf("Enter An Integer Number \n");
   scanf("%d", &n);  
  
    (n % 2 == 0)? printf("%d is Even number\n",n):printf("%d is Odd  number\n", n);
}