//7.WAP to print number in reverse order eg:64728---->reverse=82764

#include<stdio.h>
main()
{
	int num,rev=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rev=(rev*10)+(num%10);
		num=num/10;
	}
	printf("reverse %d ",rev);
}
