//4 Write a program in C to count the total number of words in a string
#include<stdio.h>
void main()
{
	char name[200];
	int count=0,i;
	
	printf("enter name ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
