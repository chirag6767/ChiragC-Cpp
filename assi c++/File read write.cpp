#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
	int age;
	ofstream of;
	cout<<"Enter data : ";
	cin.getline(data,100);
	of<<data<<endl;
	cout<<"Enter Age : ";
	cin>>age;
	of<<age<<endl;
	of.close();
	
	ifstream is;
	is.open("tops1.txt");
	cout<<"Reading from File "<<endl;
	is>>data;
	cout<<data<<endl;
	is>>data;
	cout<<data<<endl;
	is.close(); 	
}