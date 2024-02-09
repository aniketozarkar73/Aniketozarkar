//22.. Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
main()
{
	int t1=1,t2=2,i,num;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	printf("%d %d ",t1,t2);
	
	for(i=3;i<=num;i++)
	{
		if(i%2==1)
		{
			t1=t1*3;
			printf("%d",t1);
		}
		else
		{
			t2=t2*3;
			printf("%d",t2);
		}
	}
	
} 
