//Find area of Rectangle Formula : A=wl

#include<stdio.h>
main()
{
	int length,width,area;
	
	printf("\n Enter the length of rectangle : ");
	scanf("%d",&length);
	
	printf("Enter the width of rectangle : ");
	scanf("%d",&width);
	
	area=length * width;
	
	printf("Area of rectangle : %d",&area);
}
