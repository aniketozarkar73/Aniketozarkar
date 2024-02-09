// WAP to make addition, Subtraction and multiplication of two matrix using2-D Array

#include<stdio.h>
main()
{
	int a[2][3]={7,5,4,6,2,3};
	int b[2][3]={5,9,2,4,6,7};
	int c[2][3];
	int row,col;
	
	printf("\n First matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" \n %d ",a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Second matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Addition matrix : ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
		
	}
	
	
}
