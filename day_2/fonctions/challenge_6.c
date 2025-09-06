#include <stdio.h>

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: F(0) = 0, F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 10; // Number of terms to print

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}