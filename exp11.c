#include <stdio.h>

int main() {
    FILE *fp;
    int id, n, i;
    char name[50];
    float salary;

    // Write employee records to file
    fp = fopen("employee.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d (ID Name Salary): ", i + 1);
        scanf("%d %s %f", &id, name, &salary);
        fprintf(fp, "%d %s %.2f\n", id, name, salary);
    }
    fclose(fp);

    // Read and display employee records from file
    fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- EMPLOYEE DATABASE ---\n");
    printf("ID\tName\tSalary\n");
    while (fscanf(fp, "%d %s %f", &id, name, &salary) != EOF) {
        printf("%d\t%s\t%.2f\n", id, name, salary);
    }
    fclose(fp);
    return 0;
}
