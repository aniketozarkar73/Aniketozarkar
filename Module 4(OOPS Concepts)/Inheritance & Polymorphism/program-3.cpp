//3.  Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance).

#include<iostream>
using namespace std;
class Person
{
	protected:
		string name;
		int age;
	
	 
};
class Student
{
	protected:
		int percentage;
};
class Teacher:public Student,public Person
{
	public:
		void get()
		{
			cout<<"Enter the name :";
			cin>>name;
			
			cout<<"\nEnter the age :";
			cin>>age;
			
			cout<<"\nEnter the Percentage :";
			cin>>percentage;
		}
		void display()
		{
			cout<<"\nName is "<<name;
			
			cout<<"\nAge is "<<age;
			
			cout<<"\nPercentage is "<<percentage;
		}
};
main()
{
	Teacher t;
	t.get();
	t.display();
}
