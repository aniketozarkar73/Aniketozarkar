//5. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance).

#include<iostream>
using namespace std;
class Student
{
	int rollno;
	 
	 public:
	 	void get1()
	 	{
	 		cout<<"Enter your Roll number :";
	 		cin>>rollno;
	 		
		}
		void display1()
		{
			cout<<"\nrollno is "<<rollno;
		}
};
class Test : public Student
{
	public:
		int Maths,English;
		
		void get2()
		{
			cout<<"\nEnter 2 subjects names :";
			cin>>Maths>>English;
			
		}
		void display2()
		{
			cout<<"2 Subjects name are "<<Maths<<English;
		}
		
		
		
};
class Result : public Test
{
	int total;
	
	public:
		void display3()
		{
			total=Maths+English;
			cout<<"\nTotal Marks are "<<total;
			
		} 
};
main()
{
	Result r;
	r.get1();
	r.display1();
	r.get2();
	r.display2();
	r.display3();
}
