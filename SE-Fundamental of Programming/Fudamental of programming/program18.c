// Calculate person’s Annual salary
#include<stdio.h>
main()
{
	float monthlysalary,annualsalary;
	
	printf("\n Enter the monthlysalary : ");
	scanf("%f",&monthlysalary);
	
	annualsalary= monthlysalary * 12;
	
	printf("\n Your annualsalary is %f",&annualsalary);
}
