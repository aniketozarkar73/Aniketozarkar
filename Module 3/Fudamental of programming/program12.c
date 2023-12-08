//.Accept number of students from user. I need to give 5 apples to each  student How many apples are required ?

#include<stdio.h>
main()
{
	float students,apples;
	printf("\n Enter the students : ");
	scanf("%f",&students);
	
	apples=students * 5;
	
	printf(" \n no.of apples required :%f ",&apples);
}
