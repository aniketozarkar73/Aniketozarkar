//10.Write a program you have to make a summation of first and last digit(eg-1234 Ans-5)

#include<stdio.h>
main()
{
	int num,modulo,div,a;
	
	printf("Enter a Number :");
	scanf("%d",&num);
	
	modulo=num%10;
	
	printf("last digit is %d",modulo);
	
	while(num!=0)
	{
		a=num%10;//321%10=1//321%10=3//3%10=3
		num=num/10;//321/10=321/10=32 321/10=3
	}
	printf("\nfirst digit is %d",a);
	printf("\n sum of first and last digit is %d",a+modulo);
}
