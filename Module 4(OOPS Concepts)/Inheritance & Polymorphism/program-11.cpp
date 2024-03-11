//11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading. 
 //Rectangle: Area * breadth 
 //Triangle: ½ *Area* breadth 
 //Circle: Pi * Area *Area
 
 #include<iostream>
using namespace std;
class Shape
{
	public:
	void Result(double width, double length)
	{
		
		cout<<"Area of Rectangle is :"<<width*length; 
	}
	void Result(int breadth, int height)
	{
		
		cout<<"Area of Triangle is :"<<1/2*(breadth*height);
	}
	void Result(double radius)
	{
		
		cout<<"Area of Circle is :"<<3.14*radius*radius;
	}
};
main()
{
	Shape sh;
	int choice;
	double num1,num2;
	cout<<"Press 1 for Area of Rectangle \n Pres 2 for Area of Triangle \n Pres 3 for Area of Circle";
	cin>>choice;
	

	
	switch(choice)
	{
		case 1:
		    sh.Result(3.2,2.2);
		    break;
		    
		case 2:
		    sh.Result(8,6);
			break;
			
		case 3:
		   sh.Result(5.4);
		   break;
		   
		   default:
		   cout<<"Invalid choice";		
	}
}

