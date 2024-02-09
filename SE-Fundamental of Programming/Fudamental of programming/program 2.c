#include <stdio.h>
main()
{
	int a,b,sub,multi,div,mod,add;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	sub=a-b;
	multi=a*b;
	div=a/b;
	mod=a%b;
	add=a+b;
	
	printf("\n subtraction of a and b %d :",sub);
	printf("\n multiplication of a and b %d :",multi);
	printf("\n division of a and b %d :",div);
	printf("\n module of a and b %d :",mod);
	printf("\n addition of a and b %d :",add);
}
