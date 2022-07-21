 #include<stdio.h>

 void main()
 {
   int year;
   
    printf("\n ENTER ANY YEAR :  ");
    scanf("%d",&year);
    
    if(year % 400==0)
    {
    	printf("\n THIS IS LEAP YEAR",year);
	}
	else if(year % 4==0)
	{
		printf("\n THIS IS LEAP YEAR",year);
	}
	else
	{
		printf("\n THIS IS NOT LEAP YEAR",year);
	}
	
 }