#include <stdio.h>
int main() 
{
    char str[100];
    char word[] = "is";
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    char *ptr = strstr(str, word);
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    printf("The word 'is' appears %d times in the given string.\n", count);

    return 0;
}

