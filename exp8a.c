#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters until null terminator
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of the string = %d\n", len);
    return 0;
}
