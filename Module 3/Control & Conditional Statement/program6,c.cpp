//Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	char Alphabets;
	printf(" \n Enter the Alphabets : ");
	scanf("%c",&Alphabets);
	switch(Alphabets)
	{
		case 'A':
			printf(" \n A is vowel");
			break;
		case 'E':
		    printf("E is vowel ");
		    break;
		case 'I':
		    printf("I is vowel");
			break;
		case 'o':
		    printf("O is vowel");
		    break;
		case 'U':
		    printf("U is vowel");
			break;
		default:
		printf("consonants");						
		  
		
	}
}
