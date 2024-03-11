//8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include 
//member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement 
//using of aggregation.

#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int class_num;
	int roll_no;
	
	public:
		student()
		{
			cout<<"Enter Student Name";
			cin>>name;
			cout<<"Enter Class";
			cin>>class_num;
			cout<<"Enter Roll no ";
			cin>>roll_no;
			
			
		}
		
	
};
class result
{
	int marks;
	Student*stu;
	public:
		void display(Student*stu1)
		{
			stu=stu1;
			cout<<"marks is";
			cin>>marks;
			cout<<"\nname is"<<stu->name<<"\nclass is"<<stu->class_num<<"\nroll no is"<<stu->roll_no<<"\nmarks is"<<"marks";
			
			
		}
};
main()
{
	Student s;
	result s1;
	s1.display(&s);
	
}
