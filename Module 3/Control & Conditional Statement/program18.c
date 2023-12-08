// Write a C program to calculate profit and loss on a transaction

#include <stdio.h>
main()
{
	int sellingprice,costprice,profitamount;
	printf("\n Enter the cost price : ");
	scanf("%d",&costprice);
	printf("\n Enter the selling price : ");
	scanf("%d",&sellingprice);
	
	if(sellingprice > costprice)
	{
		profitamount=sellingprice - costprice;
		printf(" \n counting your profit amount %d",profitamount);
		
	}
	else if(costprice > sellingprice)
	{
		profitamount=costprice - sellingprice;
		printf("\n getting loss amount %d",&profitamount);
	}
	else
	{
		("\n you are in no profit no loss : ");
		
	}
	
	
}
