//19. Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow : 
//20. Unit 21. Charge/unit 
//22. upto 350 23. @1.20 
//24. 350 and above but less than 600 25. @1.50 
//26. 600 and above but less than 800 27. @1.80 
//28. 800 and above 29. @2.00 
//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
//the minimum bill should be of Rs. 256/-

 #include<stdio.h>
 main()
 {
 	char name[20];
 	float customer_id,unit;
 	int remaining_unit,charge,surcharge;
 	
 	printf("Enter the customer id  :");
 	scanf("%s",&customer_id);
 	
 	printf("Enter Name :");
 	scanf("%s",&name);
 	
 	printf("Enter the unit consumed by customer :");
 	scanf("%f",&unit);
 	
 	if(unit<350)
 	{
 		charge=unit*1.20;
 		printf("Charge is %d ",charge);
 	}
 	else if(unit>=350 && unit<600)
 	{
 		remaining_unit=unit-349;
 		charge=(349*1.20)+(remaining_unit*1.50);
 		printf("Charge is %d",charge);
 	}
 	else if(unit>=600 && unit<800)
 	{
 		remaining_unit=unit-599;
 		charge=(349*1.20)+(249*1.50)+(remaining_unit*1.80);
 		printf("Charge is %d",charge);
 		if(charge>=800)
 		{
 			surcharge=charge*0.18;
 			printf("\n surcharge is %d",surcharge);
 			printf("\n total charge is %d",surcharge+charge);
 			
		}
 		
	}
	else if(unit>=800)
	{
		remaining_unit=unit-799;
		charge=(349*1.20)+(249*1.50)+(249*1.80)+(remaining_unit*2);
		printf("charge is %d",charge);
		if(charge>=800)
		{
			surcharge=charge*0.18;
			printf("\n surcharge is %d",surcharge);
			printf("\n total charge is %d",surcharge + charge );
		}
	}
 }
