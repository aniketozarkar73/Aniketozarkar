// 9.Write a program make a summation of given number(eg.1523 Ans:-11)

#include<stdio.h>
main()
{
	int num,sum=0;
	
	printf("Enter the number for sum of digit :");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("Sum of digit is %d ",sum);
}
