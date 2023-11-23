#include<iostream>
using namespace std;

class STRING
{
   public:
        char n1[30];
		char n2[35];
		
   STRING(char str1[30],char str2[35])
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
	char str1[30] = "Chirag";
	char str2[35] = "Sudra";
	STRING n(str1,str2);
	+n;
	return 0;
}
