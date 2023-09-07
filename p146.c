#include <stdio.h>

struct Student {
    int student_id;
    char name[50];
    float marks;
};

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];


    for (int i = 0; i < num_students; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].student_id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }


    printf("Students with marks less than 50:\n");
    for (int i = 0; i < num_students; i++) {
        if (students[i].marks < 50) {
            printf("Student ID: %d, Name: %s\n", students[i].student_id, students[i].name);
        }
    }

    return 0;
}
