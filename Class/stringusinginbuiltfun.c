#include<stdio.h>
main()
{
	char name[20];
	printf("Enter your name :");
	gets(name);
	
	printf("name=%s",name);
	
	//printf(" \n Uppercase=%s",strupr(name));
	//printf(" \n Lowercase=%s",strlwr(name));
	//printf(" \n reverse=%s",strrev(name));
	printf("\n length=%d",strlen(name));
}
