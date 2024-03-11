//13. Write a program to find the max number from given two numbers using friend function.

#include<iostream>
using namespace std;
class Max
{
	int x,y;
	public:
		void get()
		{
			cout<<"Enter the value of x and y ";
			cin>>x>>y;
			
		
		}
		friend void number(Max);
};
void number(Max m)
{
		if(m.x>m.y)
			{
				cout<<"X is Maximum "<<m.x;
			}
			else
			{
				cout<<"y is Maximum "<<m.y;
			}
}
main()
{
	Max m;
	m.get();
	number(m);
	
}
 
