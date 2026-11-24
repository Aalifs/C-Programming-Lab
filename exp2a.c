#include <stdio.h>

int main() {
    int num;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using modulus operator
    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }
    return 0;
}
