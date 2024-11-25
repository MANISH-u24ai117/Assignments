#include <stdio.h>

struct Student {
    int roll_no;
    char name[100];
    int marks;
};

void displayHighScorers(struct Student students[], int size) {
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("Roll No: %d, Name: %s, Marks: %d\n", students[i].roll_no, students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    displayHighScorers(students, 10);
    return 0;
}