// Write a C++ program to implement a class called Circle that has private 
//member variables for radius. Include member functions to calculate the 
//circle's area and circumference.

#include<iostream>
using namespace std;
class Circle
{
		float radius;
		float circumference;
		float area;
		 
		public:
		void get()
		{
			cout<<"Enter the Radius :";
			cin>>radius;
			
		}
		void Area()
		{
			area=3.14*radius*radius;
			cout<<" \nArea of circle is : "<<area;
		}
		void Circumference()
		{
			circumference=2*3.14*radius;
			cout<<"\nCircumference of circle is :"<<circumference;	
		}
		
};
main()
{
	Circle c;
	c.get();
	c.Area();
	c.Circumference();
		
}
