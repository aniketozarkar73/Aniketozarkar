// 7 Write a program in C to copy one string to another string
#include<stdio.h>
#include<string.h>
void main()
{
	char n1[20];
	char n2[20];
	
	printf("enter name ");
	scanf("%s",&n1);
	
	strcpy(n2,n1);
	
	printf("\ncopy is %s ",n2);
}
