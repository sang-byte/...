#include <stdio.h>

struct Student {
    char student_id[10];
    char name[50];
    float marks;
};

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (int i = 0; i < num_students; i++) {
        printf("Enter student ID: ");
        scanf("%s", students[i].student_id);

        printf("Enter student name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter student marks: ");
        scanf("%f", &students[i].marks);
    }

    int max_marks_index = 0;
    for (int i = 1; i < num_students; i++) {
        if (students[i].marks > students[max_marks_index].marks) {
            max_marks_index = i;
        }
    }

    printf("\nDetails of student with highest marks:\n");
    printf("Student ID: %s\n", students[max_marks_index].student_id);
    printf("Name: %s\n", students[max_marks_index].name);
    printf("Marks: %.2f\n", students[max_marks_index].marks);

    return 0;
}
