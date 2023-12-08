// Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
main()
{
	float base,height,area;
	printf("\n Enter the base of traingle : ");
	scanf("%f",&base);
	printf("\n Enter the height of triangle : ");
	scanf("%f",&height);
	area=0.5 * base * height;
	printf("Area of triangle is %f",&area);
}
