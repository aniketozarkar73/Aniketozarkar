//1. Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

inline int mul(int x, int y)
{
	return x*y;
}
inline int cube(int i)
{
	return i*i*i;
}
main()
{
	cout<<"Multipliation is :"<<mul(4,2)<<endl;
	cout<<"Cubic value is :"<<cube(5);
}
