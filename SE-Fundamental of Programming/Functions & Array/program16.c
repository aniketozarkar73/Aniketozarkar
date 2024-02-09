//.Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int number[5];
	int sum=0,i;
	
	printf(" \n Enter 5 number: ");
	for(i=0;i<5;i++)
	{
		printf(" \n Enter number %d",i+1);
		scanf("%d",&number[i]);
		sum += number[i];	
	}
	printf("\n Sum of the number is :%d",sum);
	
}
		

