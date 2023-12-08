//Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("The value of a and b is equal");
	}
	else
	{
		printf("The value of a and b is not equal ");
	}
	
}
