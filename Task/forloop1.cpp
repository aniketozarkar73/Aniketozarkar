// Write a program in C to display the first 10 natural numbers.

#include<stdio.h>
main()
{
	int i,sum=0;
	printf(" \n The number is :");
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d",i);
		
	}
	printf(" \n The sum is %d",sum);
}
