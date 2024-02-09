// 2). Vowel or Consonant using switch case.

#include<stdio.h>
main()
{
	int Alphabet;
	
	printf("Enter the Alphabet :");
	scanf("%d",&Alphabet);
	
	switch(Alphabet)
	{
		case 'A':
			printf("A is Vowels");
			break;
			
		case 'E':
		    printf("E is Vowels");
			break;
			
		case 'I':
		    printf("I is Vowels");
			break;
			
		case 'O':
		    printf("O is Vowels");
			break;
			
		case 'U':
		    printf("U is Vowels");
			break;
			
		default:
		printf("Consunants");					
	}
}
