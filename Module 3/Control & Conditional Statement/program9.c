// C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main()
{
	char ch;
	printf(" \n Enter a character :,ch ");
	scanf("%c",&ch);
	
	if(isbig(ch))
	{
		printf(" \n is an uppercase",ch);
	}
	else if(issmall(ch))
	{
		printf(" \n is a lowercase",ch);
	}
	else if (isnumber(ch))
	{
		printf(" \n is a digit",ch);
	}
	else
	{
		printf(" \n is a special character",ch);
	}
}
