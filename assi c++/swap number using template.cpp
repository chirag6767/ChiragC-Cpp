#include<iostream>
using namespace std;

template <typename T>
T chirag(T a, T b)
{
	T c;
	cout<<"Before Swap A = "<<a<<"\tB = "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"After Swap A = "<<a<<"\tB = "<<b<<endl;
	return 0;
}
	
int main()
{
	
	 chirag(10, 20);
	return 0;
}
