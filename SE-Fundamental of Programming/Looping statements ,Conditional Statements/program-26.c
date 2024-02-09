#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        int innerSum = 0;
        printf("(");
        for (j = 1; j <= i; j++) 
		{
            innerSum += j;
            printf("%d", j);
            if (j < i) {
                printf("+");
            }
        }
        printf(")");
    }

    return 0;
}

