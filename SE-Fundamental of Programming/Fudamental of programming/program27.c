//Convert days into months

#include<stdio.h>
main ()
{
   int months, days ;
   
   printf("Enter days");
   scanf("%d", &days) ;
   
   printf("Enter months");
   scanf("%d",&months);
   
   months = days / 30 ;
   days = days % 30 ;
   
   printf("\n Months = %d Days = %d", months, days) ;
}
