//5. Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
#include<string.h>
void main()
{
	char n1[20],n2[20];
	int i,j,temp=0;
	
	printf("enter name 1 ");
	scanf("%s",&n1);
	
	printf("enter name 2 ");
	scanf("%s",&n2);
	
	for(i=0;n1[i]!='\0'&& n2[i]!='\0';i++,j++)
	{
	
	if(n1[i]==n2[i])
	{
		temp++;
	}

	
}
if(temp!=0)
{
	printf("both are same");
}
else
{
	printf("both are not same");
}


}
