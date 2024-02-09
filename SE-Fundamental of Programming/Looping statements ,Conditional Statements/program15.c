//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i,sum=0;
	printf(" \n The first 10 numbers is : ");
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf("\n The sum is %d",sum);
}
