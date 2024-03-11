//4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include 
//member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;
class Bank
{
	int account_number;
	float account_balance;
	float dm;
	float wm;
	
	public:
		void get()
		{
			cout<<"Enter the Account number :";
			cin>>account_number;
			
			cout<<"Enter the Account Balance :";
			cin>>account_balance;
				
		}
		void deposite_money()
		{
			cout<<"Enter the Deposite Money :";
			cin>>dm;
			
			account_balance=account_balance+dm;
			cout<<" The Deposite Money is:"<<account_balance;
			
			
		}
		void withdraw_money()
		{
			cout<<"Enter the Withdraw Money :";
			cin>>wm;
			
			account_balance=account_balance-wm;
			cout<<"The withdraw money is :"<<account_balance;
			
		}
	
};
main()
{
	Bank b;
	b.get();
	b.deposite_money();
	b.withdraw_money();
	
}


