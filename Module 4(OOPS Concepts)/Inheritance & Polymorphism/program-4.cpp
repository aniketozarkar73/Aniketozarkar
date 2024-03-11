//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class Student
{
	protected:
		int roll_no;
		string name;
		
	public:
	   void student_details()
	   {
	   	 cout<<"Enter the Roll Number :";
	   	 cin>>roll_no;
	   	 
	   	 cout<<"\nEnter the Student Name :";
	   	 cin>>name;
	   }			
		
	
};
class Exam
{
	protected:
		float maths,science,english;
		
	public:
	  void exam_details()
	  {
	  	cout<<"\nEnter the Marks of Maths :";
	  	cin>>maths;
	  	
	  	cout<<"\nEnter the Marks of Science :";
	  	cin>>science;
	  	
	  	cout<<"\nEnter the Marks of English :";
	  	cin>>english;
	  	
	  }	
		
};
class Result :public Exam,public Student
{
	public:
		void marksheet_details()
		{
			cout<<"\nMarksheet";
			
			cout<<"\nRoll Number "<<roll_no;
			
			cout<<"\n Student Name"<<name;
			
			cout<<"\nEnter the Marks of Maths :"<<maths;
			
			cout<<"\nEnter the Marks of Science :"<<science;
			
			cout<<"\nEnter the Marks of English :"<<english;
			
			int totalmarks=maths + science + english;
			
			int averagemarks=totalmarks/3;
			
			cout<<"Total Marks"<<totalmarks;
			cout<<"Average Marks"<<averagemarks;
				
			
		}
	
	
};
main()
{
	Result r;
	r.student_details();
	r.exam_details();
	r.marksheet_details();
}
