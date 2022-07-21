#include<stdio.h>

void main()
{
	char ch;
	printf("\nEnter a Character ? ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a' : 
		case 'e'  : 
		case 'i'  : 
		case 'o'  : 		  		
		case 'u'  : 
		case 'A' : 
		case 'E'  : 
		case 'I'  : 
		case 'O'  : 		  		
		case 'U'  : printf("It is a Vowel");
				  break;
		default : printf("\nIt is a Consonant");
				  break;
	}	
	printf("\n out of switch");
}

