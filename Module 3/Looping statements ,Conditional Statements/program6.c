 // WAP to print Fibonacci series up to given numbers  
#include<stdio.h>
main()
{
	int t1=0,t2=1,t3,num,i;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d %d",t1,t2);
	for(i=2;i<num;i++)
	{
		t3=t2+t1;
		printf("%d",t3);
		t1=t2;
		t2=t3;
	}
}
