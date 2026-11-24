#include <stdio.h>

int main() {
    int choice;
    float m1, m2, m3, total, pct;
    int entered = 0;

menu:
    printf("\n--- STUDENT GRADE & RESULT MANAGEMENT ---\n");
    printf("1. Enter Marks (3 Subjects)\n");
    printf("2. Calculate Total & Percentage\n");
    printf("3. Display Grade & Result\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter marks for 3 subjects (out of 100): ");
            scanf("%f %f %f", &m1, &m2, &m3);
            entered = 1;
            printf("Marks saved successfully.\n");
            goto menu;

        case 2:
            if (!entered) {
                printf("Please enter marks first!\n");
            } else {
                total = m1 + m2 + m3;
                pct = total / 3.0;
                printf("Total Marks = %.2f / 300\n", total);
                printf("Percentage  = %.2f%%\n", pct);
            }
            goto menu;

        case 3:
            if (!entered) {
                printf("Please enter marks first!\n");
            } else {
                pct = (m1 + m2 + m3) / 3.0;
                printf("Percentage: %.2f%% | ", pct);
                if (pct >= 75)      printf("Grade: Distinction (Pass)\n");
                else if (pct >= 60) printf("Grade: First Class (Pass)\n");
                else if (pct >= 50) printf("Grade: Second Class (Pass)\n");
                else if (pct >= 40) printf("Grade: Pass\n");
                else                printf("Grade: Fail\n");
            }
            goto menu;

        case 4:
            printf("Exiting program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
            goto menu;
    }
    return 0;
}
