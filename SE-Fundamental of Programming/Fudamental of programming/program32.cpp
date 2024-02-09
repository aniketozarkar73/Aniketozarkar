 // Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int n1,n2,sum;
	
	printf("Enter the First Number :");
	scanf("%d",&n1);
	
	printf("Enter the Second Number :");
	scanf("%d",&n2);
	
	sum=n1+n2;
	
	printf("\nSum of %d is:",sum);
	
	printf("\nSize of sum is %d bytes",sizeof(sum));
}
