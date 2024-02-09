// 12.WAP to find maximum number among 3 numbers using ternary operator 

#include<stdio.h>
main()
{
	int x1,x2,x3;
	
	printf("Enter the number :");
	scanf("%d",&x1);
	
	printf("Enter the number :");
	scanf("%d",&x2);
	
	printf("Enter the number :");
	scanf("%d",&x3);
	
	(x1>x2 && x2>x3)?printf("n1 is big :"):(x2>x1 && x2>x3)?printf("n2 is big : "):printf("n3 is big :");
}
