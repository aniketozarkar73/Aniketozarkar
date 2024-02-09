//1. Write a program in C to find the length of a string without using library  functions.

#include<stdio.h>
void main()
{
	char name[100],count;
	
	printf("enter the name ");
	scanf("%s",&name);
	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
