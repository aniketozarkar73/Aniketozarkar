//3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member 
// functions to get and set these variables.

#include<iostream>
using namespace std;
class Car
{
	string Company;
	string Model;
	int Year;
	
	public:
		void get()
		{
			cout<<"Enter Company of Car :";
			cin>>Company;
			
			cout<<"\nEnter Model of Car :";
			cin>>Model;
			
			cout<<"\nEnter Year of Car :";
			cin>>Year;
		}
		void display()
		{
			cout<<"\nThe Company of Car is :"<<Company;
			
			cout<<"\nThe Model of Car is :"<<Model;
			
			cout<<"\nThe Year of Car is :"<<Year;
		}
};
main()
{
	Car c;
	c.get();
	c.display();
}
