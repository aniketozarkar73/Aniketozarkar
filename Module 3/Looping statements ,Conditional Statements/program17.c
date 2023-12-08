//.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
	int num,i,evensum=0,oddsum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=1;i<=;i++)
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

