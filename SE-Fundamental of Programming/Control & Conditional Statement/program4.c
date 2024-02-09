//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
main()
{
	int number;
	printf(" \n Enter the number : ");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("Addition");
			break;
		case 2:
		    printf("Subtraction");
			break;
		case 3:
		    printf("Multiplication");
			break;
		case 4:
		    printf("Division");
		    break;
		case 5:
		    printf("Modulo");
			break;
	    default :
		printf("invalid input");				
	}
	
} 
