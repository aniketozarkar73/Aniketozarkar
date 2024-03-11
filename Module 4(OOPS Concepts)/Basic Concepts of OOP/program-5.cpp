//Write a C++ program to create a class called Rectangle that has private 
//member variables for length and width. Implement member functions to 
//calculate the rectangle's area and perimeter.

 #include<iostream>
 using namespace std;
 class Rectangle
 {
 	double width;
 	double length;
 	float area;
 	double p;
 	
 	public:
 		void get()
 	   {
 			cout<<"Enter the Width of rectangle :";
 			cin>>width;
 			
 			cout<<"\nEnter the Length of rectangle :";
 			cin>>length;
 			
	    }
	    void Area()
	    {
	    	area=width*length;
	    	cout<<"\nThe Area of rectangle is :"<<area;
	    	
		}
		void perimeter()
		{
			p = 2*(length+width);
			cout<<"\nThe Perimeter of rectangle is :"<<p;
		 }
};
main()
{
	Rectangle r;
	r.get();
	r.Area();
	r.perimeter();
	}
