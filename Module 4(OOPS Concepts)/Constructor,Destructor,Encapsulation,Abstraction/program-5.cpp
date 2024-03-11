//5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class Triangle
{
	
	float side1,side2,side3;
	
	public:
		void get_data()
		{
			cout<<"Enter the 1st side :";
			cin>>side1;
			
			cout<<"\nEnter the 2nd side :";
			cin>>side2;
			
			cout<<"\nEnter the 3rd side :";
			cin>>side3;
		}
		void dispaly_data()
		{
			if(side1==side2 && side2==side3 && side1==side3)
			{
				cout<<"The Triangle is Equilateral ";
				
			}
			else if(side1==side2 || side2==side3 || side1==side3)
			{
				cout<<"The Triangle is Isosceles ";
			}
			else
			{
				cout<<"The Traingle is Scalene ";
			}
		}
			
		
};
main()
{
	Triangle t;
	t.get_data();
	t.dispaly_data();
}
 
