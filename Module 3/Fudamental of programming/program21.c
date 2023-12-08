//.Accept 2 numbers from user and swap 2 numbers with using 3rd variable .

#include<stdio.h>
main()
{
	int a,b,swap;
	
	printf(" \n Enter the value of a : ");
	scanf("%d",&a);
	
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	swap=a;
	a=b;
	b=swap;
	
	printf(" \n After the value of a swapping is %d",a);
	printf("\n After the value of b swapping is %d",b);
}
