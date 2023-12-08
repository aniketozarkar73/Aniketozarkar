//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int n,i,f=1;
	
	printf("Enter a number to find factors : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("the factor of %d is %d \n",n,f);
}
