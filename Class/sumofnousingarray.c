#include<stdio.h>
main()
{
	int n[5]={34,12,67,89,20};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("%d\n",n[i]);
		sum=sum+n[i];
		
	}
	printf("\n sum=%d",sum);
}
