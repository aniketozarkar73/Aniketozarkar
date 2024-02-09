// WAP to accept 5 students name and store it in array

#include<stdio.h>
main()
{
	char names[5][50];
	int i;
	for( i=0;i<5;i++)
	{
		printf(" \n Enter the name of students : %d",i+1);
		scanf("%s",names[i]);
	}
	printf("\n Enter the names : ");
	for(i=0;i<5;i++)
	{
		printf(" \n Students %d :%s",i+1,names[i]);
	}
} 
