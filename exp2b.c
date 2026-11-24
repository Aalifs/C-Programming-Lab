#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    // Input range from user
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    // Swap if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Sum all odd numbers between start and end
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers between %d and %d = %d\n", start, end, sum);
    return 0;
}
