#include<stdio.h>
main()
{
	int i,j,temp=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			temp++;
			printf(" %d ",temp);
		}
		printf("\n");
	}
}
