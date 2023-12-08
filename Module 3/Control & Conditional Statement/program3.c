//WAP to check if the given year is a leap year or not

#include <stdio.h>
int main()
 {
   int year;
   
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0) 
   {
      printf("\n is a leap year %d", year);
   }
   
   else if (year % 100 == 0) 
   {
      printf("\n  is not a leap year %d", year);
   }
   
   else if (year % 4 == 0) 
   {
      printf("\n  is a leap year %d", year);
   }
   
   else {
      printf("\n is not a leap year %d", year);
   }


}
