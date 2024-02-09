//12. Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
main()
{
	int num,r,result=0,ornum;
	
	printf("Enter the Number :");
	scanf("%d",&ornum);
	
	num=ornum;
	
	while(num!=0)
	{
		r=num%10;
		result=result+(r*r*r);
		num=num/10;
	}
	if(ornum==result)
	{
		printf("Number is Armstrong :");
	}
	else
	{
		printf("Number is not Armstrong");
	}
}
