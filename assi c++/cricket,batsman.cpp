#include<iostream>
using namespace std;
 
class Cricketer
{
   public:
   	    string name,bs;
		long long t_runs,age,b_num,runs,t_match,avg_runs,best_p;
		
		Cricketer()
		{
		  name = "Hardik Pandya";
		  age = 30;
		  b_num = 33;
		  runs = 550;
		  bs = "Right Hended batsman";
		  t_runs = 4366;
	   	  t_match = 40;
		  best_p = 150; 
		  avg_runs= t_runs/(float)t_match;
	    }
	    
	    
};

class Batsman : public Cricketer
{
	public:
		
	void Details()
	{
	cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
    cout<<"         Batsman Information"<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
	cout<<"Batsman Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
    cout<<"Batsman Number : "<<b_num<<endl;
	cout<<"Batsman Run : "<<runs<<endl;
	cout<<"Total run : "<<t_runs<<endl;
	cout<<"Best Performance : "<<best_p<<endl;
	cout<<"Average Runs : "	<<avg_runs<<endl;
   }

};
 
int main()
{
    Batsman add;
    add.Details();
    
	return 0;
}
