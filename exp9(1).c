#include <stdio.h>

// Define structure for student record
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record s[5];
    int i, topper = 0;

    // Read data for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);

        if (s[i].total_marks > s[topper].total_marks) {
            topper = i;
        }
    }

    // Display topper
    printf("\n--- TOPPER DETAILS ---\n");
    printf("Name        : %s\n", s[topper].name);
    printf("Roll Number : %d\n", s[topper].roll_number);
    printf("Total Marks : %.2f\n", s[topper].total_marks);
    return 0;
}
