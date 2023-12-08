//find lowest number

#include<stdio.h>
main()
{
	int n[5]={90,52,85,62,55};
	int i,small;
	
	small=n[0];
	for(i=1;i<5;i++)
	{
		if(small>n[i])
		small=n[i];
	}
	printf("Smallest element of array is %d",small);
		
}
