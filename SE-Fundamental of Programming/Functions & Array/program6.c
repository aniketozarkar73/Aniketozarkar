// WAP to make addition, Subtraction and multiplication of two matrix using2-D Array

#include<stdio.h>
main()
{
	int a[2][3]={63,64,71,89,45,21};
	int b[2][3]={21,65,47,35,37,15};
	int c[2][3];
	int row,col;
	
	printf("\n First matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",a[row][col]);
		}
		printf("\n");
	}
	
	
	printf("\n Second Matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",b[row][col]);
		}
		printf("\n");
	}
	
	printf(" \n Addition of Matrix");
	
	for(row=0;row<2;row++);
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf("%d",c[row][col]);
		}
		printf("\n");
	}
	
	printf(" \n Subtraction of Matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf("%d",c[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Multiplication of matrix : ");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf("%d",c[row][col]);
		}
		printf("\n");
	}		
	
}
	
