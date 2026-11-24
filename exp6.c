#include <stdio.h>

// Counter function using static storage class
void counter() {
    static int count = 0; // Retains value between calls
    count++;
    printf("Function called %d time(s).\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();
    return 0;
}
