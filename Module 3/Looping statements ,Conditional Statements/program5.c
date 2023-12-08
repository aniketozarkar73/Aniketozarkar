//WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i,num,f=1;
	printf(" \n Enter the number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("the factorial of number is %d",f);
}
