#include <stdio.h>

void main()
{
	char name[20];
	int rollno, sub1, sub2, sub3, total;
	float per;
	
	printf("*_*_*_*_* ACCEPT STUDANT DETAIL*_*_*_*_*");
	printf("\n ENTER ROLLNO : ");
	scanf("%S",&rollno);
	printf("\n ENTER NAME   : ");
	scanf("%s",&name);
	printf("\n ENTER MATHS  : ");
	scanf("%d",&sub1);
	printf("\n ENTER SCI    : ");
	scanf("%d",&sub2);
	printf("\n ENTER ENG    : ");
	scanf("%d",&sub3);
	
	total = sub1 + sub2 + sub3;
	per = total /3;
	printf("\n\n ENTER TOTAL MARKS =%d",total);
	printf("\n\n ENTER PERCENTAGE =%f",per);
	
	if(per>65)
	{
		printf("\n CLASS : Distirction");
	}
	else if(per>60)
	{
		printf("\n CLASS : First Class");
	}
	else if(per>55)
	{
		printf("\n CLASS : Second Class");
	}
	else if(per>50)
	{
		printf("\n CLASS : Pass Class");
	}
	else
	{
		printf("\n Fail");
	}
	
}
