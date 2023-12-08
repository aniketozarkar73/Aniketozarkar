//sorting of an array-ascending order 

#include<stdio.h>
main()
{
	int b[5]={45,22,63,85,75};
	int i,j,a,n;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(b[i]>b[j])
			{
				a=b[i];
				b[i]=b[j];
				b[j]=a;
				
				
			}
		}
	}
	printf( "Ascending order : ");
	for(i=0;i<5;i++)
	{
		printf(" \n %d",b[i]);
	}
	
}

	
