///8 count the total number of vowels or consonant in a string
#include<stdio.h>
#include<string.h>
main()
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
