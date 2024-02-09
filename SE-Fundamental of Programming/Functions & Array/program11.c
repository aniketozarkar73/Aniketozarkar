#include<stdio.h>
main()
{
	int num[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf(" \n Enter the number :");
		scanf("%d",num[i]);
	}
	printf(" \n Numbers in reverse order :");
	
	for(i=4;i>=0;i++)
	{
		printf("%d",num[i]);
	}
}

