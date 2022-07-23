#include<iostream>
using namespace std;

class Account
{
  public:
    string c_name,t_name;
	int ac_no;
	Account()
	{
		c_name = "chirag sudra";
		ac_no  = 2346276589765;
		t_name = "saving Account";		
	}
	void display()
	{
		cout<<"============================"<<endl;
		cout<<"        HDFC BANK"<<endl<<endl;
		cout<<"============================"<<endl;
		cout<<"Bnak Holder Name : "<<c_name<<endl;
		cout<<"Account Number   : "<<ac_no<<endl;
		cout<<"Type Of Account  : "<<t_name<<endl;
		
	}
};

int main()
{
	Account ac;
	ac.display();
	return 0;
}