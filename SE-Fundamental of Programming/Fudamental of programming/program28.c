//.Convert years into days and months

#include<stdio.h>
main()
{
	int day, year,month;
	
	printf(" \n Enter the year : ");
	scanf("%d",&year);
	
	month=year * 365;
	printf(" \n After calculating year into month %d",month);
	
	day=year * 12;
	printf("\n After calculating year into days %d",day);
	
	
	
}
