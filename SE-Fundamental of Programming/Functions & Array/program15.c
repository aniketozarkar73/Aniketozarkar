//Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int i,j,b,n;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
			
			
		}
	}
	printf("Ascending order : ");
	for(i=0;i<5;i++)
	{
		printf("\n %d",a[i]);
	}
	
}
