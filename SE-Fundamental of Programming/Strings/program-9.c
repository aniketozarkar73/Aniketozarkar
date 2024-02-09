#include <stdio.h>
int main() 
{
    char str[100];
    int maxLength = 0,i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) 
	{
        maxLength++;
    }
    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}

