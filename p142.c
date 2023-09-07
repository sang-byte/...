#include<stdio.h>
int main()
{
    struct student
    {
        int ID;
        char name[];
    } s1;
    printf("enter the student ID:");
    scanf("%d",&s1.ID);
    printf("enter student name:");
    scanf("%s",&s1.name);
    printf("the student ID is %d\n",s1.ID);
    printf("the student name is %s\n",s1.name);

    return 0;
}
