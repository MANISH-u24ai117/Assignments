#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rollNumber;
    char name[50];
    float totalMarks;
} Student;

int main() {
    FILE *file;
    int n;

    // Open the file in write mode
    file = fopen("LNMIITSTUDENT.java", "w");
    if (file == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Error: Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read a string with spaces
        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);

        // Write student details to the file
        fprintf(file, "Roll Number: %d\n", students[i].rollNumber);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Total Marks: %.2f\n\n", students[i].totalMarks);
    }

    printf("Details of %d students have been saved in LNMIITSTUDENT.java.\n", n);

    // Free allocated memory and close the file
    free(students);
    fclose(file);

    return 0;
}
