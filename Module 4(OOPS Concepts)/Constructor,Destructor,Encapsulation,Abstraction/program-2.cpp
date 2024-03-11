// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class Calculator
{
	int a,b;
	
	
	public:
		Calculator()
		{
			cout<<"Enter the value of a :";
			cin>>a;
			
			cout<<"Enter the value of  b :";
			cin>>b;
	    }
	    void Addition()
	    {
	    	cout<<"The Addition of a and b is :"<<a+b;
		}
		void Subtraction()
		{
			cout<<"\nThe Subtraction of a and b is :"<<a-b;
		}
		void Multiplication()
		{
			cout<<"\nThe Multiplication of a and b is :"<<a*b;
		}
		void Division()
		{
			cout<<"\nThe Division of a and b is :"<<a/b;
		}
		void Modulo()
		{
			cout<<"\nThe Modulo of a and b is :"<<a%b;
		}
};
main()
{
	Calculator cal;

	cal.Addition();
	cal.Subtraction();
	cal.Multiplication();
	cal.Division();
	cal.Modulo();
}
