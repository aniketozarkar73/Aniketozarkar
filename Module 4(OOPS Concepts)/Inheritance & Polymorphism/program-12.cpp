//12. Write a program to swap the two numbers using friend function without using third variable.

#include<iostream>
using namespace std;
class Number
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter the value of a and b";
			cin>>a>>b;
			
			b=a+b;
			a=b-a;
			b=b-a;
		}
		friend void result(Number);
	
};
void result(Number n)
{
	cout<<"\nAfter Swapping is"<<n.a;
	cout<<"\nBefore Swapping is"<<n.b;
	
}
main()
{
	Number n;
	n.get();
	result(n);
	
}
