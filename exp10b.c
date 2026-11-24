#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Point to last element and move backwards
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
