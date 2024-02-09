//35.Accept the input month number and print number of days in that month.

#include<stdio.h>
main()
{
	int month;
	
	printf("Enter the Month :");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("January");
			printf("31 days");
			break;
			
		case 2:
		    printf("Februray");
			printf("29 days");
			break;
			
		case 3:
		   printf("March");
		   printf("31 days");
		   break;
		   
		case 4:
		   printf("April");
		   printf("30 days");
		   break;
		   
		case 5:
		   printf("May");
		   printf("31 days");
		   break;
		   
		case 6:
		   printf("June");
		   printf("30 days");
		   break;
		   
		case 7:
		   printf("July");
		   printf("31 days");
		   break;
		   
		case 8:
		   printf("August");
		   printf("31 days");
		   break;
		   
		case 9:
		   printf("September");
		   printf("30 days");
		   break;
		   
		case 10:
		   printf("October");
		   printf("31 days");
		   break;
		   
		case 11:
		   printf("November");
		   printf("30 days");
		   break;
		   
		case 12:
		   printf("December");
		   printf("31 days");
		   break;
		   
		default:
		    printf("Invalid Month");
			                                		
	}
	
	
	
	
	
}
