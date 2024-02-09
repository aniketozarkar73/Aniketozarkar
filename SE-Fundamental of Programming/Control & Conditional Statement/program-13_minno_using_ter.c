// 13.WAP to find minimum number among 3 numbers using ternary operator

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
	
	(x1<x2 && x2<x3)?printf("n1 is Small :"):(x2<x1 && x2<3)?printf("n2 is Small : "):printf("n3 is Small :");
} 

