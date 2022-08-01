#include<iostream>
using namespace std;

class STUDENT
{
    public:
	  int rollno;
	  string name;
	  
	STUDENT()
	{
	   name = "Chirag Sudra";
	   rollno = 23;	
	}	
};

class TEST : public STUDENT
{
    public:
	  int s1,s2,total;
	  
	TEST()
	{
	    s1 = 87;
		s2 = 90;
		total = s1+s2;	
    }  	
};

class RESULT : public TEST
{
   public:
     
	 RESULT()
	 {
	 	cout<<"Student name : "<<name<<endl<<endl;
	 	cout<<"Roll No      : "<<rollno<<endl<<endl;
	 	cout<<"Subjest 1    : "<<s1<<endl<<endl;
	 	cout<<"Subjest 2    : "<<s2<<endl<<endl;
	 	cout<<"Total Marks  : "<<total<<endl<<endl;
	 }	
};

int main()
{
	RESULT S;
	return 0;
}