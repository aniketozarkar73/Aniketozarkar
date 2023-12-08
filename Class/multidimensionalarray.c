#include<stdio.h>
main()
{
	int a[2][3]={5,2,7,1,4,9};
	int b[2][3]={3,1,6,5,9,4};
	int c[2][3];
	int row,col;
	
	printf(" \n First Matrix : ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d", a[row][col]);
		}
		printf("\n");
	}
	
	printf(" \n Second Matrix : ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d", b[row][col]);
		}
		printf("\n");
    } 
    printf(" \n Addition matrix");
    for(row=0;row<2;row++)
    {
    	for(col=0;col<2;col++)
    	{
    		c[row][col]=a[row][col]+b[row][col];
    		printf("%d",c[row][col]);
		}
		printf("\n");
    }
	
	
						
	
}
