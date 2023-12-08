// WAP to find the largest of three numbers

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("  Enter the number :");
	scanf("%d",&a);
	
	printf(" Enter the number : ");
	scanf("%d",&b);
	
	printf(" Enter the number : ");
	scanf("%d",&c);
	
	if(a>b && b>c)
	{
		printf("a is largest");
	}
	else if(b>a && b>c)
	{
		printf("b is largest");
		
	}
	else
	{
		printf("c is largest");
	}
	
}
