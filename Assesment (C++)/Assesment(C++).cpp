#include<iostream>
using namespace std;
class Lecture_management_system
{
	string Name_of_the_Teacher;
	string Name_of_the_Subject;
	string Name_of_Course;
	int Number_of_Lectures;
	public:
		void get()
		{
			cout<<"Enter the Name of the Teacher : ";
			cin>>Name_of_the_Teacher;
			
			cout<<"Enter the Name of the Subject :";
			cin>>Name_of_the_Subject;
			
			cout<<"Enter the Name of Course :";
			cin>>Name_of_Course;
			
			cout<<"Enter the Number of Lectures :";
			cin>>Number_of_Lectures;
		}
		void display()
		{
			cout<<"\nName is "<<Name_of_the_Teacher;
			
			cout<<"\nName of subject is "<<Name_of_the_Subject;
			
			cout<<"\nName of course is "<<Name_of_Course;
			
			cout<<"\nNumber of lectuers are "<<Number_of_Lectures;
			
		}
	
	
};
main()
{
	Lecture_management_system LMS;
	LMS.get();
	LMS.display();
	LMS.get();
	LMS.display();
}
