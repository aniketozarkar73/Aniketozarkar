//20.Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	int salary,pre,loan;
	
	printf("Enter the Salary :");
	scanf("%d",&salary);
	
	pre=salary*10/100;
	
	printf(" \n Enter the Salary after insurance Premium is %d :",pre);
	
	loan=salary*10/100;
	
	printf("\n Enter the Salary after Loan Installment is %d :",loan);
}
