// 10. Write a program to concatenate the two strings using Operator Overloading
#include<string.h>
#include<iostream>
using namespace std;
class Concatenate
{
	char name1[50],name2[50];
	public:
		Concatenate(char a1[50],char a2[50])
		{
			strcpy(name1,a1);
			strcpy(name2,a2);
		}
		Concatenate operator + ()
		{
			strcat(name1,"");
			cout<<"Merged String:"<<strcat(name1,name2);
			
		}
	
	
	
};
main()
{
	char n1[50],n2[50];
	cout<<"Enter two strings :";
	cin>>n1>>n2;
	Concatenate con(n1,n2);
	+con; 
}

