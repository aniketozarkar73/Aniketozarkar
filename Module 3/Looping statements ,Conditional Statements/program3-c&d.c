//WAP to take 10 no. Input from user find out below values
// c.Sum of even numbers

#include<stdio.h>
main()
{
	int num,i,evensum=0,oddsum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	printf("Evensum=%d",evensum);
	printf("\nOddsum=%d",oddsum);
}

