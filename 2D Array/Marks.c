#include <stdio.h>

int main() {
    int students, subjects;
    
    printf("Enter number of students: ");
    scanf("%d", &students);
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);
    
    int marks[students][subjects];
    
    for (int i = 0; i < students; i++) {
        printf("\nEnter marks for student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    printf("\n--- Marks Sheet ---\n");
    printf("Student\t");
    for (int j = 0; j < subjects; j++) {
        printf("Sub%d\t", j + 1);
    }
    printf("Total\tAverage\n");
    
    for (int i = 0; i < students; i++) {
        int total = 0;
        printf("%d\t", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("%d\t", marks[i][j]);
            total += marks[i][j];
        }
        printf("%d\t%.2f\n", total, (float)total / subjects);
    }
    
    return 0;
}