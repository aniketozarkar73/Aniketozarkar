//.Accept 2 numbers from user and swap 2 numbers without using 3rd variable 

#include<stdio.h>
main()
{
	int a,b;
	
	printf(" \n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	a=a+b;
	b=b-a;
	a=a-b;
	
	printf("The value of a after swapping is %d",a);
	printf("The value of b after swapping is %d",b);
	
}
