// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
	int a,b,c,sum;
	
	printf(" \n Enter the angles of triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	
	sum=a+b+c;
	
	if(sum==180)
	{
		printf("is a triangle");
	}
	else
	{
		printf("is not a triangle");
	}
	
	
	
	
}
