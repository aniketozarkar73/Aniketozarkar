//7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to 
//set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;
class Date
{
	int date,month,year;
	
	public:
		void get()
		{
			cout<<"Enter date :";
			cin>>date;
			
			cout<<"\nEnter the Month :";
			cin>>month;
			
			cout<<"\nEnter the year :";
			cin>>year;
			
			if(date>31 || date<=0)
			{
				cout<<"\ninvalid date";
			}
			else
			{
				cout<<"\nvalid date ";
			}
			if(month>12 || month<=0)
			{
				cout<<"\ninvalid month";
			}
			else
			{
				cout<<"\nvalid month";
			}
			if(year>2024 || year<=0)
			{
				cout<<"\ninvalid year ";
			}
			else
			{
				cout<<"\nvalid year";
			}
				
		}
		void display()
		{
			cout<<"\ndate is "<<date;
			
			cout<<"\nmonth is "<<month;
			
			cout<<"\nyear is "<<year;
		}
	
	
};
main()
{
	Date d;
	d.get();
	d.display();
}
