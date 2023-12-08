//WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int number;
	printf("\n Enter the number : ");
	scanf("%d",&number);
	if(number% 2==0)
	{
		printf("\n  The number is even ",number);
	}
	else
	{
		printf("\n The number is odd",number);
	}
	
}
