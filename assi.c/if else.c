#include<stdio.h>

void main()
{
  int n1,n2;
  printf("\n ENTER A :  ");
  scanf("%d",&n1);
  printf("\n ENTER B :  ");
  scanf("%d",&n2);
  printf("\n A=%d,B=%d",n1,n2);
  
  if(n1>n2)
  {
  	printf("\n A Is Greater");
  }
  else
  {
  	printf("\n B IS Greater");
  }
}