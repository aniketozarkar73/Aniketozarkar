//2. Write a C++ Program to find Area of Rectangle using inheritance.

#include<iostream>
using namespace std;
class Shape
{
	
	protected:
		double length;
		double breadth;	
			
};
class Rectangle:public Shape
{
	int Area;
	public:
		void get()
		{
			cout<<"Enter the length of Rectangle :";
			cin>>length;
			
			cout<<"Enter the breadth of Rectangle :";
			cin>>breadth;
		}
		void display()
		{
			Area=length*breadth;
			cout<<"Area of Rectangle is :"<<Area;
		}
	
};
main()
{
	Rectangle r;
	r.get();
	r.display();
}

