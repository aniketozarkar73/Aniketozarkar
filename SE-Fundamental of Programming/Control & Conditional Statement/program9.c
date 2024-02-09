// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main()
{
char value;
	
	printf("Enter the value ");
	scanf("%d",&value);
	
	if(value>='A' && value<='Z');
	{
		printf(" It is Uppercase :");
	}
	else if(value>='a' && value<='z');
	{
		printf("It is Lowercase : ");
	}
	else if(value>='1' && value<='10');
	{
		printf("It is Digit ");
	}
	else
	{
		printf("It is Special Character ");
	}


}
