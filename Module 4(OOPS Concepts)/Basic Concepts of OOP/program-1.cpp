//1. WAP to create simple calculator using class 

#include<iostream>
using namespace std;
class Calculator
{
	int a,b;
	
	public:
		void get()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			
			cout<<"Enter the value of b :";
			cin>>b; 
		}
		void Addition()
		{
			cout<<"The Addition of a and b is"<<a+b; 
		}
		void Subtraction()
		{
			cout<<"The Subtraction of a and b is "<<a-b;
		}
		void Multipliation()
		{
			cout<<"The Multiplication of a and b is "<<a*b;
		}
		void Division()
		{
			cout<<"The Division of a and b is "<<a/b;
		}
		void Modulo()
		{
			cout<<"The Modulo of a and b is "<<a%b;
		}
	
	
};
main()
{
	Calculator cal;
	
	int choice;
	
	cout<<"Press 1 for Addition \n Press 2 for Subtraction \n Press 3 for Multiplication \n Press 4 for Division \n Press 5 for Modulo";
	cin>>choice;
	cal.get();
	
	switch(choice)
	{
		case 1:
			cout<<"Addition";
			cal.Addition();
			break;
			
		case 2:
		    cout<<"Subtraction";
			cal.Subtraction();
			break;
			
		case 3:
		    cout<<"Multiplication";
			cal.Multipliation();
			break;
			
		case 4:
		    cout<<"Division";
			cal.Division();
			break;
			
		case 5:
		    cout<<"Modulo";
			cal.Modulo();
			break;
			
		default:
		cout<<"invalid output";		
						
	}
}
