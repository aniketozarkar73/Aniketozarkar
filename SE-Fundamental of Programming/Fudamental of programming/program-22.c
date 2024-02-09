//22. Calculate compound interest (Compound Interest formula): a) Amount= P(1 + R/100)t   b) Amount – P 

#include<stdio.h>
main()
{
	int P,R,T,Amt,CI;
	
	printf("Enter the rate :");
	scanf("%d",&R);
	
	printf("Enter the Principle :");
	scanf("%d",&P);
	
	printf("Enter the Time :");
	scanf("%d",&T);
	
	Amt=P*(1+R/100)*T;
	
	printf("\n Annually Compund Intrest is %d",Amt);
	
	CI=Amt-P;
	
	
	printf("\n Compound Intrest is %d : ",CI);
	
	
	
	
	
	
}
