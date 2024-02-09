// WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	char str[100];
	int i,length=0;
	
	printf(" \n Enter a String : ");
	scanf("%d",str);
	
	for(i=0;str[i] !='\0';i++)
	length++;
	{
		printf("\n The length of string is %d ",length);
	}
	
}


