#include <stdio.h>

int main() {
    float phy, chem, math, avg;

    // Input PCM marks
    printf("Enter Physics marks: ");
    scanf("%f", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);
    printf("Enter Maths marks: ");
    scanf("%f", &math);

    // Calculate average
    avg = (phy + chem + math) / 3.0;
    printf("\nPCM Average = %.2f%%\n", avg);

    // Check eligibility using conditional operator
    (avg >= 50.0) ? printf("Status: Eligible for admission.\n")
                  : printf("Status: Not eligible for admission.\n");
    return 0;
}
