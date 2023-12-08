//.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d",sum);
}
