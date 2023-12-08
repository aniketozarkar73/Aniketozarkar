//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()
{
	int a,b;
	
	printf("\n Enter the  number : ");
	scanf("%d",&a);
	
	printf("\n Enter the number : ");
	scanf("%d",&b);
	
	printf(" \n you entered a=%d and b=%",&a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n After swapping a=%d and b=%",&a,b);
}
