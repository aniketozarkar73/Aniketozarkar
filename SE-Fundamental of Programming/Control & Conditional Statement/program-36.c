//36.Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.

#include<stdio.h>
main()
{
	int unit,remaining_unit;
	float charge,additional_charge;
	
	printf("Enter the unit :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		charge=0.50*unit;
		printf("charge is %d",charge);
	}
	else if(unit>50 && unit<=150)
	{
		remaining_unit=unit-50;
		charge=(50*0.50)+(remaining_unit*0.75);
		
		printf("charge is %f",charge);
	}
	else if(unit>150 && unit<=250)
	{
		remaining_unit=unit-150;
		charge=(50*0.50)+(100*0.75)+(remaining_unit*1.20);
		
		printf("Charge is %f",charge);
	}
	else if(unit>250)
	{
		remaining_unit=unit-250;
		charge=(50*0.50)+(100*0.75)+(100*1.20)+(remaining_unit*1.50);
		
		printf("\n charge is %f",charge);
		
		additional_charge=charge*0.20;
		
		printf("\nadditional charge is %f",additional_charge);
		printf("\ntotal charge is %f",charge+additional_charge);
	}
}
