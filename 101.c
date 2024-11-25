#include <stdio.h>

typedef struct {
    int rollNumber;
    char name[50];
    float totalMarks;
} Student;

int main() {
    FILE *file;
    int n;

    // Open the file in append mode
    file = fopen("LNMIITSTUDENT.dat", "a");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Prompt user for the number of students to append
    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    // Append details of each student to the file
    for (int i = 0; i < n; i++) {
        Student student;

        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", student.name); // Read a string with spaces
        printf("Total Marks: ");
        scanf("%f", &student.totalMarks);

        // Write the student details to the file
        fprintf(file, "Roll Number: %d\n", student.rollNumber);
        fprintf(file, "Name: %s\n", student.name);
        fprintf(file, "Total Marks: %.2f\n\n", student.totalMarks);
    }

    printf("\nDetails of %d students have been successfully appended to LNMIITSTUDENT.dat.\n", n);

    // Close the file
    fclose(file);

    return 0;
}
