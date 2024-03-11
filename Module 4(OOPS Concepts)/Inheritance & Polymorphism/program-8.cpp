//*8. Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading*

#include<iostream>
using namespace std;
class calculator{
 int no1,no2;
 double ans;
 public:
      void result()
	  {
	  	cout<<"enter 2 values for addition ";
	  	cin>>no1>>no2;
	  	ans=no1+no2;
	  	cout<<"addition of 2 values is "<<ans;
		  }	
		  void result(int x,int y)
		  {
		  	ans=x-y;
		  	cout<<"subtraction is "<<ans;
		  }
		  void result(double x,double y)
		  {
		  	ans=x*y;
		  	cout<<"multiplication is "<<ans;
		  }
		  void result(double x)
		  {
		  	double y;
		  	cout<<"enter 2nd value for division of double datatype ";
		  	cin>>y;
		  	if(y==0)
		  	{
		  		cout<<"can't divide by zero";
			  }
			  else
			  {
			  	ans=x/y;
			  	cout<<"division of 2 values is "<<ans;
			  }
		  }
		  void result(int x)
		  {
		  	int y;
		  	cout<<"enter 2nd value for modulo of int datatype ";
		  	cin>>y;
		  	ans=x%y;
		  	cout<<"modulo is "<<ans;
		  }
};
int main()
{
	
	calculator obj;
	int choice;
	cout<<"enter 1 for + 2 for - 3 for * 4 for / 5 for %";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.result();
			break;
		case 2:
			obj.result(5,2);
			break;
		case 3:
			obj.result(4.2,3.2);
			break;
		case 4:
			obj.result(11.4);
			break;
		case 5:
			obj.result(5);
			break;
			default:
				cout<<"enter valid choice";
				
				
	}
	

}
