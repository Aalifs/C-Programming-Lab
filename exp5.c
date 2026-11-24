#include <stdio.h>

// Iterative function to print Fibonacci series
void fibIterative(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

// Recursive function to return nth Fibonacci term
int fibRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
    int n;
    printf("Enter number of terms (N): ");
    scanf("%d", &n);

    printf("Fibonacci (Iterative): ");
    fibIterative(n);

    printf("\nFibonacci (Recursive): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibRecursive(i));
    }
    printf("\n");
    return 0;
}
