#include<stdio.h>
#include<string.h>
main()
{
	char name[20],address[20];
	
	printf("Enter name: ");
	gets(name);
	
	printf("Enter address:");
	gets(address);
	
	printf("\n name=%s",name);
	printf("\n address=%s",address);
}

