//.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>
main()
{
	int numbers[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<5;i++)
	{
		if(numbers[i] % 2==0)
		{
			printf(  "\n  %d is even",numbers[i]);
		}
		else
		{
			printf("\n %d is odd",numbers[i]);
		}
	}
	
}
