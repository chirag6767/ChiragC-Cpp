#include<iostream>
using namespace std;

class Person
{
    public:
	   int age;
	   string member;
	       
	   Person()
	   {
	      member = "Chirag Sudra";
		  age = 20;	
	   }	   	
};

class Student
{
   public:
   	
     int s1,s2,s3,s4,total;
	 float per;
	 
	Student()
	{
		s1 = 56;
		s2 = 98;
		s3 = 78;
		s4 = 60;
		total = s1+s2+s3+s4;
		per = total/(float)4;
	} 	
};

class Teacher : public Person, public Student
{
    public:
	  int salary;
	  
	  Teacher()
	  {
	      salary = 70000;	
	  }	
	  
	  void Show()
	  {
	  	  cout<<"Member Name Is : "<<member<<endl<<endl;
	  	  cout<<"Age            : "<<age<<endl<<endl;
	  	  cout<<"Total Marks    : "<<total<<endl<<endl;
	  	  cout<<"Percentage     : "<<per<<endl<<endl;
	  }
	  
	  void Display()
	  {
	  	  cout<<"Salary         : "<<salary<<endl<<endl;
	  }
};

int main()
{
	Teacher t;
	t.Show();
	t.Display();
	return 0;
}