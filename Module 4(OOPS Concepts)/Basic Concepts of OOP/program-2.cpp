// Define a class to represent a bank account. Include the following members:

#include<iostream>
using namespace std;
class Bank
{
	string depositor_name;
	int account_no;
	string account_type;
	float amount;
	int deposite_amount;
	float withdraw_amount;
	string name_balance;
	float after_withdraw;
	public:
		void get()
		{
			cout<<"Enter the name of depositor ";
			cin>>depositor_name;
			
			cout<<"Enter Account Number ";
			cin>>account_no;
			
			cout<<"Enter the Account type ";
			cin>>account_type;
			
			cout<<"Enter the Amount ";
			cin>>amount;
		}
		
		void deposit_amount()
		{
			cout<<"Enter the name of Depositor";
			cin>>depositor_amount;
			
			cout<<"deposite amount is"<<deposite_amount;
			
			amount=amount+deposite_amount;
		}
		
		void withdraw_amount()
		{
			cout<<"Enter the withdraw amount";
			cin>>withdraw_amount;
			
			cout<<"Withdraw amount is "<<withdraw_amount;
			
			if(withdraw_amount<=deposite_amount)
			{
				amount=amount-withdraw_amount;
			}
			else
			{
				cout<<"your account has no balance kindly enter valid amount";
			}
			
		}
		
		void display_name()
		{
			cout<<"\nname"<<depositor_name;
			
			cout<<"\nbalance is"<<amount;
		}
};
main()
{
	Bank b;
	b.get();
	char choice;
	
	do
	{
		cout<<"\npress 1 for total amount ";
		cout<<"\npress 2 for withdraw amount ";
		cout<<"\npress 3 for balance amount ";
		cout<<"\nenter your choice ";
		
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				b.deposit_amount();
				break;
				
			case 2:
			    b.withdraw_amount();
				break;
				
			case 3:
			    b.display_name();
				braek;
				
			default:
				cout<<"kindly enter valid choice";
			  			
		}
		cout<<"\ndo you want to continue ?";
		cin>>choice;
	}
	while(choice=='y');	
	
	
}
