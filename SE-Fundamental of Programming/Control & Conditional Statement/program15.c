
#include<stdio.h>
main()
{
	int phy,chem,maths,total;
	
	printf("Enter the marks of physics : ");
	scanf("%d",&phy);
	
	printf("Enter the marks of chemistry : ");
	scanf("%d",&chem);
	
	printf("Enter the marks of maths : ");
	scanf("%d",&maths);
	
	total=phy+chem+maths;
	
	printf("\n total %d",total);
	printf("\n total marks of physics and maths %d",phy+maths);
	
	if(maths>=65 && phy>=55 && chem>=50 || (maths+phy)>=140) 
	{
		printf("The candidate is eligible");
	}
	{
		printf("The candidate is not eligible");
	}
	
	
	
}
