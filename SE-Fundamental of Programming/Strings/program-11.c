#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0,j;

    printf("Enter a sentence: ");
    while ((sentence[i] = getchar()) != '\n' && i < sizeof(sentence) - 1) 
	{
        i++;
    }
    sentence[i] = '\0';

    for ( j = 0; sentence[j] != '\0'; j++) {
        if (sentence[j] >= 'a' && sentence[j] <= 'z') {
            sentence[j] = sentence[j] - 32;
        } else if (sentence[j] >= 'A' && sentence[j] <= 'Z') {
            sentence[j] = sentence[j] + 32;
        }
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}

