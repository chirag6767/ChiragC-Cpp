#include<iostream>
using namespace std;

class Number
{
	private:
    int num1,num2;
    
	friend int Max(Number);
	
	public:
	  Number()
	  {
	  	cout<<"Enter Number 1 :";
	  	cin>>num1;
	  	cout<<endl;
	  	cout<<"Enter Number 2 : ";
	  	cin>>num2;
	  	
	  }	
};


int Max(Number n1)
{
	if(n1.num1 > n1.num2)
	{
		cout<<"Number 1 Is Max";
	}
	
	else
	{
		cout<<"Number 2 Is Max";
	}
	
	return 0;
}

int main()
{
	Number n;
	Max(n);
	
	return 0;
}