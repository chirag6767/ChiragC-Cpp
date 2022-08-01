#include<iostream>
using namespace std;

class STRING
{
   public:
        char n1[20];
		char n2[25];
		
   STRING(char str1[20],char str2[25])
   { 
       strcpy(n1,str1);
       strcpy(n2,str2);
   }
   
   	void operator+()
	{
	   	cout<<"Concatenate : "<<strcat(n1,n2);
	}

};

int main()
{
	char str1[20] = "Chirag";
	char str2[25] = "Sudra";
	STRING n(str1,str2);
	+n;
	return 0;
}