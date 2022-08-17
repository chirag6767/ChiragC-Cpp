#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str="Hello";
	string str1="Hii";
	string str2;
	str2 = str1;
	int len;
	
	cout << "str2 : " << str2 <<endl;
	
	cout << "str1 + str2 : " << str1 + str2 <<endl;
	
	len = str.size();
	cout << "str.size() : " << len <<endl;
}