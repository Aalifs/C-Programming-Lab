#include <stdio.h>

// User-defined function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int low, high;

    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are:\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
