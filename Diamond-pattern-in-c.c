#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        // If n is even, make it odd by adding 1
        n++;
    }

    for (i = 1; i <= n; i += 2) {
        for (j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j <= (n - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
