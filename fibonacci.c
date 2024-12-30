#include <stdio.h>

void printFib(int n) {
    // If the number of terms is less than 1
    if (n < 1) {
        printf("Invalid number of terms\n");
        return;
    }

    // First two terms of the series
    int prev1 = 1, prev2 = 0;

    // Print the Fibonacci series up to n terms
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", prev2); // First term
        } else if (i == 2) {
            printf("%d ", prev1); // Second term
        } else {
            int curr = prev1 + prev2;
            printf("%d ", curr); // Current term
            prev2 = prev1;
            prev1 = curr;
        }
    }
    printf("\n"); // Newline after printing the series
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Print the first n Fibonacci terms
    printFib(n);

    return 0;
}
