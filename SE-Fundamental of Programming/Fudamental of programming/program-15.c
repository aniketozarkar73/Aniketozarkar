//15. Convert School's name is abbreviated form

#include<stdio.h>
main()
{
	char f_name[20],l_name[20];
	
	printf("Enter first name :");
	scanf("%s",f_name);
	
	printf("Enter last name :");
	scanf("%s",l_name);
	
	printf("\n abbreviated form %c. %s",f_name[0],l_name);
}
