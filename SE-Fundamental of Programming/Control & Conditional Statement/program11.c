//WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	(num%2==0)?printf("Number is Even :"):printf("Number is odd");
}
    //condition?printf("True statement"):printf("False statement");
	
