#include<stdio.h>
#include<string.h>
main()
{
	char a1[20];
	char a2[20];
	printf(" a1 : ");
	gets(a1);
	
	strcpy(a2,a1);
	strrev(a2);
	
	if(!strcmp(a1,a2))
	{
		printf("\n it is pallindrome");	
	}
	else
	{
		printf("\n it is not pallindrome");
	}
}
