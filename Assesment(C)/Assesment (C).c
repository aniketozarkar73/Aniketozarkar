#include<string.h>
#include<stdio.h>
void Reverse()
{
	char str[100],i;
 	int len=0;
 	
 	printf("Enter a String :");
 	scanf("%s",str);
 	
 	while(str[len]!='\0')
 	{
 		
 		len++;
 		
	}
	printf("\n Individual Character of the string in reverse order ");
	for(i=len-1;i>=0;i--)
	{
		printf("\n%c",str[i]);
	} 	
}

//**********************************************************************************************************

void Concate()
{
	char name[]={'A','N','I','K','E','T'};
	char name1[100];
	char result[100];
	int i;
	
	printf("Enter value for name1");
	scanf("%s",&name1);
	
	printf("First string :name: %s",name);
	printf("\n Second string :name: %s",name1);
	
	strcat;  
	strcat(name,name1);
	printf("merged string is %s",name);
}

//****************************************************************************************************************

void Palindrome()
{
	char str1[20];
	int i,length;
	int res=0;
	
	printf("Enter the string :");
	scanf("%s",str1);
	
	length=strlen(str1);
	
	for(i=0;i<length;i++)
	{
		if(str1[i] != str1[length-i-1])
		
		{res=1;break;}
		
	}
	if(res)
	{
		printf("%s is not a palindrome",str1);
	}
	else
	{
		printf("%s is a palindrome ",str1);
	}
	
 
}

 


//**********************************************************************************************************************

void Copy_string()
{
	char n1[20];
	char n2[20];
	
	printf("enter name ");
	scanf("%s",&n1);
	
	strcpy(n2,n1);
	
	printf("\ncopy is %s ",n2);
}

//**************************************************************************************

void Len_of_string()
{
	
	char name[100],count;
	int i;
	
	printf("enter the name ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}

//*****************************************************************************************************************

void fre_of_string()
{
	char s[100],  c;
	int length,i;
		int res=0;
		printf("enter your string");
		scanf("%s",&s);
		printf("\nenter the charcter u want to find?");
		scanf(" %c",&c);
		length=strlen(s);
		printf("\nlength is %d",length);
		for(i=0;i<length;i++)
	{
			
		if(s[i]==c)
		{
			res++;
		}
	}
	
	printf("\n%c is repeated for %d time",c,res);
	
}

//************************************************************************************************************************

void No_of_vowels_con()
{
		char name[20];
	int i,vcount=0,ccount=0;
	
	printf("enter the name ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]!='a' && name[i]!='e'  && name[i]!='i'  && name[i]!='o' && name[i]!='u')
		{
			ccount++;
		}
		else
		{
			vcount++;
		}
		
	}
      printf("vcount = %d",vcount);
      printf("ccount = %d",ccount);
	
}

//********************************************************************************************************

void space_digit()
{
	char name[20];
	int digit=0,space=0,i;
	
	printf("Enter the Number :");
	scanf("%d",&digit);
	
	if(name[i]>='0' && name[i]<='9')
	{
		digit++;
	}
	else
	{
		space++;
	}
};
main()

{
	char ch;
		int choice;
	
	
	do
	
	{
		printf(" \nPress 1 for Reverse \n Press 2 for Concatenation \n Press 3 for Palindrome \n Press 4 for Copy_string \n Press 5 for Length_of_string \n Press 6 for Frequency_of_Character \n Press 7 for Find_Vowels_and_Consunants \n Press 8 for Find_Blank_Space_&_digits \n Press 9 to Exit : ");

	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Reverse();
				break;
				
			case 2:
			    Concate();
				break;
				
			case 3:
			    Palindrome();
				break;
				
			case 4:
				 Copy_string();
				 break;
				 
			case 5:
			     Len_of_string();
				 break;
				 	 
			case 6:
			    fre_of_string();
				break;
				     			
			case 7:
				No_of_vowels_con();
				break;
				
			case 8:
			    space_digit();
				break;
				
			default:
			printf("\ninvalid ");	     	
		
		}
			printf("\ndo you want to continue enter y for yes");
			scanf(" %c",&ch);
	}
		while(ch=='y');
	
}
	

 

