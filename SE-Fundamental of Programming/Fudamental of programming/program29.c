//.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int minutes,seconds,hours ;
	
	printf(" \n Enter the minutes: ");
	scanf("%d",&minutes);
	
	seconds= minutes * 60;
	printf(" \n After calculating minutes into seconds %d",&seconds);
	
	hours=minutes / 60;
	printf("\n After calculating minutes into hours %d",&hours);
	
	
	
}
