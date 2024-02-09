#include<stdio.h>
 main()
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
