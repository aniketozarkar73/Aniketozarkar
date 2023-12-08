//.WAP to check whether a number is negative, positive or zero

#include<stdio.h>
main()
{
	int number;
	printf(" \n Enter the number : ");
	scanf("%d",&number);
	if(number<0)
	{
		printf(" \n The number is negative",number);
	}
	else if(number>0)
	{
		printf("\n The number is positive",number);
	}
	else
	{
		printf("\n Zero",number);
	}
}
