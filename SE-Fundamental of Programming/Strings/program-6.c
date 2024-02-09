//Write a program in C to count the total number of alphabets, digits and special  characters in a string.
#include<stdio.h>
void main()
{
	char name[20];
	int alpha=0,digit=0,special=0;
	printf("enter name ");
	scanf("%s",&name);
	int i;
	for( i=0;name[i]!='\0';i++)//anjali/0  i<4 4<4
	{
		if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z')
		{
			alpha++;
		}
		else if(name[i]>='0' && name[i]<='9')
		{
			digit++;
		}
		else
		{
			special++;
		}
		
	}
	printf("\nalphabet is %d",alpha);
	printf("\ndigit is %d",digit);
	printf("\nspecial is %d",special);
}
