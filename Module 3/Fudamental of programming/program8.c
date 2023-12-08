//Find circumference of Rectangle formula : C = 4 * a

#include<stdio.h>
main()
{
	float length,width,circumference;
	printf(" \n Enter the length of  rectangle : ");
	scanf("%f",&length);
	printf("\n Enter the width of rectangle : ");
	scanf("%f",&width);
	circumference= 4*(length * width);
	printf("circumference of rectangle : %f",&circumference);
}
