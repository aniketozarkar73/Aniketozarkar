#include<stdio.h>
#include<string.h>
main()
{
	char a1[10];
	char a2[10];
	
	printf("Enter a1 :");
	gets(a1);
	
	printf("Enter a2 :");
	gets(a2);
	
	strcat(a1,a2);
	printf("  a1=%s",a1);
}
