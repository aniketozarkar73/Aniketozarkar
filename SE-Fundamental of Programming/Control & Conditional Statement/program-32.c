// 32.Write a C program to input basic salary of an employee and calculate its Gross salary according to following:

#include<stdio.h>
main()
{
	int salary,HRA,DA;
	
	printf("Enter the Salary :");
	scanf("%d",&salary);
	
	if(salary<=10000)
	{
		HRA=(salary*20)/100;
		printf("\nHRA is %d ",HRA);
		DA=(salary*80)/100;
		printf("\nDA is %d ",DA); 	
	}
	else if(salary<=20000)
	{
		HRA=(salary*25)/100;
		printf("\nHRA is %d ",HRA);
		DA=(salary*90)/100;
		printf("\nDA is %d ",DA);
	}
	else if(salary<=20000)
	{
		HRA=(salary*30)/100;
		printf("\nHRA is %d ",HRA);
		DA=(salary*95)/100;
		printf("\nDA is %d ",DA);
	}
	else
	{
		printf("Invalid input");
	}
}

 
