#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sign = 1; // To alternate between positive and negative signs
    double sum = 0.0; // To store the cumulative sum

    for (i = 1; i <= n; i++) {
        if (sign == 1) {
            printf("%d/%d + ", i, i + 1);
            sum += (double)i / (i + 1);
        } else {
            printf("%d/%d - ", i, i + 1);
            sum -= (double)i / (i + 1);
        }
        sign *= -1; // Toggle the sign for the next iteration
    }

    printf("\nSum of the series up to %d terms: %.2f\n", n, sum);

    return 0;
}

