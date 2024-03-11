//1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template <typename S>

void Swap(S a,S b)
{
	
	b=a+b;
	a=b-a;
	b=b-a;
	
	cout<<"The value of a is "<<a;
	
	cout<<"\nThe value of b is "<<b;
}
main()
{
	Swap<int>(3,4);
}
