//25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int i,a,b=0;
	
	for(i=0;i<5;i++)
	{
		printf("Please Enter your %d value : ",i);
		scanf("%d",&a);
		
		b=b+a;
	}
	printf("Average of five values is %d ",b/5);
}
