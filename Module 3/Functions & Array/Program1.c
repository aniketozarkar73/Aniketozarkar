// Write a program to find out the max number from given array using function

#include<stdio.h>
main()
{
	int n[5]={85,63,41,28,76};
	int i,max;
	 
	max=n[0];
	for(i=0;i<5;i++)
	{
		if(max<n[i])
		max=n[i];		
	}
	printf("Maximum element if an array is %d",max); 
}
