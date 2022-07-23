#include<iostream>
using namespace std;

class Account
{
  public:
    string c_name,t_name;
	long long ac_no ,ba=0,da,cbb,wd,cbbw;
	
	Account()
	{
		c_name = "chirag sudra";
		ac_no  = 2346276589765;
		t_name = "saving Account";		
	}
	void display()
	{
		cout<<"==================================="<<endl;
		cout<<"        HDFC BANK"<<endl;
		cout<<"==================================="<<endl;
        cout<<"Bnak Holder Name : "<<c_name<<endl;
		cout<<"Account Number   : "<<ac_no<<endl;
		cout<<"Type Of Account  : "<<t_name<<endl<<endl<<endl;
	}
	
	void deposit()
	{
		cout<<"==================================="<<endl;
		cout<<"        DEPOSIT AMOUNT"<<endl;
		cout<<"==================================="<<endl;
		cout<<"How Much Do You Want Amount To Deposit : ";
		cin>>da;
		cout<<endl;
		cbb = ba+da;
		cout<<endl;
		cout<<"==================================="<<endl;
		cout<<"       CURRENT BANK BALANCE"<<endl;
		cout<<"==================================="<<endl;
		cout<<"Your Current bank balance is : "<<cbb<<endl<<endl<<endl;
	}
	
	
	void withdraw()
	{
		cout<<"==================================="<<endl;
		cout<<"       WITHDRAW AMOUNT"<<endl;
		cout<<"==================================="<<endl;
		cout<<"How Much Do You Want Amount To Withdraw : ";
		cin>>wd;
		cout<<endl;
		cbbw =cbb-wd;
		cout<<endl<<endl;
		cout<<"==================================="<<endl;
		cout<<"      YOUR CURRENT BANK BALANCE"<<endl;
		cout<<"==================================="<<endl;
		cout<<"Your Current bank balance is : "<<cbbw<<endl;
	}
};

int main()
{
	Account ac;
	ac.display();
	ac.deposit();
	ac.withdraw();
	return 0;
}