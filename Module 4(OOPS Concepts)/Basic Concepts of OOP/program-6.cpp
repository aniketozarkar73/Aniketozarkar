//6. Write a C++ program to create a class called Person that has private 
//member variables for name, age and country. Implement member 
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;
class Person
{
	string name;
	int age;
	string country;
	
	public:
		void get()
		{
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"\nEnter the Age :";
			cin>>age;
			
			cout<<"\nEnter the Country :";
			cin>>country;
		}
		void display()
		{
			cout<<"\nThe Name is :"<<name;
			
			cout<<"\nThe Age is :"<<age;
			
			cout<<"\nThe Country is :"<<country;
		}
	
	
};
main()
{
	Person p;
	p.get();
	p.display();
	
}
