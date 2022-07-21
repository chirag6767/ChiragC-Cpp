#include<stdio.h>
void main()
{ 
	int a = 39, b = 87, c = 77,d,e,f;
	a = --b;    
	b = a++;
	c = ++a;
	d = --c;
	e = d--;
	f = ++e;
	printf("\nA = %d \nB = %d \nC = %d \nD = %d \nE = %d \nF = %d",a,b,c,d,e,f);



}