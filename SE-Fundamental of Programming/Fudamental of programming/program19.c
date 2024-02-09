//Calculate compound interest

#include<stdio.h>
 main()
{
float principle,rate,time,ci;

printf("Enter principle amount : ");
scanf("%f",&principle);

printf("Enter time in years : ");
scanf("%f",&time);

printf("Enter rate : ");
scanf("%f",&rate);

ci = principle* (pow((1+rate/100),time));

printf("Compound Interest = %f",ci);


}
