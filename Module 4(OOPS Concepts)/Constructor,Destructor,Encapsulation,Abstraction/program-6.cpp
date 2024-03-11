//6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include 
//member functions to calculate and set salary based on employee performance. Using of constructor.

#include<iostream>
using namespace std;
class Employee
{
	int Em_ID,salary;
	string name;
	
	public:
		
		Employee()
		{
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"\nEnter the Employee Id :";
			cin>>Em_ID;
			
			cout<<"\nEnter the Salary :";
			cin>>salary;
			
			if(salary<=20000)
			{
				cout<<"\nPerformance is Low ";
			}
			else if(salary<=40000)
			{
				cout<<"\nPerformance is Average ";
				
			}
			else
			{
				cout<<"\nPerformance is Best";
			}
			{
				cout<<"Performance is Best";
			}
		}
	
};
main()
{
	Employee em;
}
