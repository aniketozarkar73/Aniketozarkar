// Find the maximum from given array
#include<stdio.h>
main()
{
	int n[5]={90,52,85,62,55};
	int i,max;
	
	max=n[0];
	for(i=1;i>5;i++)
	{
		if(max>n[i])
		max=n[i];
	}
	printf("Maximum element of array is %d",max);
		
}
