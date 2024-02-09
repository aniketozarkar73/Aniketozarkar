//2. Write a program in C to separate individual characters from a string

#include<stdio.h>
void main()
{
	char name[100];
	
	printf("enter name ");
	scanf("%s",&name);
	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]!=" ")
		{
			printf("%c\n",name[i]);
		}
	}
}
