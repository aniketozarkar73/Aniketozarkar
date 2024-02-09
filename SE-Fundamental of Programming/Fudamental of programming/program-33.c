//.WAP C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)


#include<stdio.h>
main()
{
	float num;
	
	printf("Enter the Number :");
	scanf("%f",&num);
	
	printf("Number first power %f \n",num);
	printf("Number Second power %f \n",num*num);
	printf("Number Third Power %f ",num*num*num);
}
