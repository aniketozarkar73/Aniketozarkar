//14.Accept 5 numbers from users and find those numbers factorials 

#include<stdio.h>
main()
{
	int num,i,f=1,temp;
	
	for(i=1;i<=5;i++)
	{
		f=1;
		
		printf("\n Enter %d num",i);
		scanf("%d",&num);
		
		temp=num;
		while(num!=0)
		{
			f=f*i;
			num--;
		}
		printf("\n Number is %d : factorial is %d",temp,f);
		
		
		
	}
	
}
