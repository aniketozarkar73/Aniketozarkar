#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    char smallest_word[MAX_LENGTH], largest_word[MAX_LENGTH];
    int i, j, len, min_len, max_len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    min_len = MAX_LENGTH; // Initialize to a large value
    max_len = 0; // Initialize to 0

    i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }
        j = i;
        while (str[j] != ' ' && str[j] != '\0') {
            j++;
        }
        len = j - i;
        if (len > 0) {
            if (len < min_len) {
                min_len = len;
                strncpy(smallest_word, str + i, len);
                smallest_word[len] = '\0';
            }
            if (len > max_len) {
                max_len = len;
                strncpy(largest_word, str + i, len);
                largest_word[len] = '\0';
            }
        }
        i = j;
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}

