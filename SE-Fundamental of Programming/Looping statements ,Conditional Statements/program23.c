//C Program to Reverse a Number Using FOR LoopSeries Program

#include<stdio.h>
main()
{
   int i,num,reversenumber=0,remainder;
   
   printf("Enter number : ");
   scanf("%d",&num);
   
   for(;num!=0;num=num/10)
   {
   	remainder=num%10;
   	reversenumber=reversenumber*10+remainder;
   }
   printf(" \n The reverse number is %d",reversenumber);   
   
   	
       

}
