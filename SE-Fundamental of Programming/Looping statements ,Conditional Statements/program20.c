//20.WAP program to print below output using for loop

#include<stdio.h>
main()
{
	int row,col;
	int n=1;
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=10;col++)
		{
			printf(" %d ",n);
			n++;
		}
		printf("\n");
	}
}
