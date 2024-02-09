#include<stdio.h>
main()
{
	int row,col;
	//int n=65;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf(" %c ",col+64);
			//=n++;
		}
		printf("\n");
	}
}
