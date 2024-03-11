////6. Write a C++ Program to show access to Private Public and Protected using Inheritance.
// PRIVATE
//#include<iostream>
//using namepsace std;
//class student
//{
//	private:
//		int roll_no;
//		string name;
//};
//class result:public student
//{
//	float pr;
//	public:
//		void get()
//		{
//			cout<<"Enter roll_no and name ";
//			cin>>roll_no;
//			cout<<"Enter Percentage";
//			cin>>pr;
//		}
//		void display()
//		{
//			cout<<"name is "<<name<<"id is "<<roll_no<<"percentage is"<<pr;
//		}
//};
//int main()
//{
//	
//	result obj;
//	obj.get();
//	obj.display();
//}

//PROTECTED

//
//#include<iostream>
//using namepsace std;
//class student
//{
//	protected:
//		int roll_no;
//		string name;
//};
//class result:public student
//{
//	float pr;
//	public:
//		void get()
//		{
//			cout<<"Enter roll_no and name ";
//			cin>>roll_no;
//			cout<<"Enter Percentage";
//			cin>>pr;
//		}
//		void display()
//		{
//			cout<<"name is "<<name<<"id is "<<roll_no<<"percentage is"<<pr;
//		}
//};
//int main()
//{
//	
//	result obj;
//	obj.get();
//	obj.display();
//}


//PUBLIC

#include<iostream>
using namespace std;
class student   
               
{
	public:
		int roll_no;
		string name;
	
};
class result:public student
{
	float pr;
	public:
		void get()
		{
			cout<<"Enter roll_no and name ";
			cin>>roll_no;
			cout<<"Enter Percentage";
			cin>>pr;
		}
		void display()
		{
			cout<<"name is "<<name<<"id is "<<roll_no<<"percentage is"<<pr;
		}
};
int main()
{
	
	result obj;
	obj.get();
	obj.display();
}



