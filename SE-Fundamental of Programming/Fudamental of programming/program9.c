// Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
main()
{
	float a,b,c,triangle;
	printf("\n Enter the the 1st side : ");
	scanf("%f",&a);
	
	printf("\n Enter the 2nd side : ");
	scanf("%f",&b);
	
	printf("\n Enter the 3rd side : ");
	scanf("%f",&c);
	
	triangle=a+b+c;
	
	printf("\n circumference of triangle %f :",triangle); 
}
