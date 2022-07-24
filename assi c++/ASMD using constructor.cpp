#include<iostream>
using namespace std;

class ASMD
{
   public:
   	
	int Addition, Subtrection, Multiplication, Division;
	int a=20, b=10;
   	
	ASMD()
	{
		Addition = a+b;
		Subtrection = a-b;
		Multiplication = a*b;
		Division = a/b; 
	}
   	 
	void asmd()
	{
		cout<<"Addition is       :"<<a+b<<endl<<endl;
		cout<<"Subtrection is    :"<<a-b<<endl<<endl;
		cout<<"Multiplication is :"<<a*b<<endl<<endl;
    	cout<<"Division is       :"<<a/(float)b<<endl<<endl;	
	}
};
int main()
{
	ASMD fly;
	fly.asmd();
	
	return 0;
}