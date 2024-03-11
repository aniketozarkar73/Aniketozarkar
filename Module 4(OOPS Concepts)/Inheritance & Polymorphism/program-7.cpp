// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.



#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
};
class test:public student
{
	protected:
		int m1,m2;
};
class result:public test
{
	int total;
	public:
		result()
		{
			cout<<"Enter the Roll_number : ";
			cin>>roll_no;
			
			cout<<"\nEnter two  Subjects marks:";
			cin>>m1>>m2;
			total=m1+m2;
		}
		void display()
		{
			cout<<"\nRoll_Number is : "<<roll_no<<"total marks is "<<total;
		}
};
main()
{
	result obj;
	obj.display();
} 
