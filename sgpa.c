#include <stdio.h>

int main() {
    int n;
    char subject[20][30];   // array for subject names
    int credits[20];
    int marks[20];
    char grade[20];
    int gradePoint[20];

    int totalCredits = 0;
    float totalWeightedPoints = 0;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for subject %d\n", i + 1);

        printf("Subject name: ");
        scanf("%s", subject[i]);

        printf("Credits: ");
        scanf("%d", &credits[i]);

        printf("Marks (0-100): ");
        scanf("%d", &marks[i]);

        /* Convert marks to grade and grade points */
        if (marks[i] >= 90) {
            grade[i] = 'S'; gradePoint[i] = 10;
        } else if (marks[i] >= 80) {
            grade[i] = 'A'; gradePoint[i] = 9;
        } else if (marks[i] >= 70) {
            grade[i] = 'B'; gradePoint[i] = 8;
        } else if (marks[i] >= 60) {
            grade[i] = 'C'; gradePoint[i] = 7;
        } else if (marks[i] >= 50) {
            grade[i] = 'D'; gradePoint[i] = 6;
        } else if (marks[i] >= 40) {
            grade[i] = 'E'; gradePoint[i] = 4;
        } else {
            grade[i] = 'F'; gradePoint[i] = 0;
        }

        totalCredits += credits[i];
        totalWeightedPoints += credits[i] * gradePoint[i];
    }

    /* Output table */
    printf("\n-------------------------------------------------------------\n");
    printf("%-15s %-8s %-8s %-8s %-12s\n",
           "Subject", "Credits", "Marks", "Grade", "GradePoints");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-15s %-8d %-8d %-8c %-12d\n",
               subject[i], credits[i], marks[i],
               grade[i], gradePoint[i]);
    }

    printf("-------------------------------------------------------------\n");

    /* SGPA calculation */
    float sgpa = totalWeightedPoints / totalCredits;
    printf("SGPA = %.2f\n", sgpa);

    return 0;
}
