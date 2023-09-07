#include<stdio.h>
int main()
{
    struct employee
    {
        int ID;
        char name[25];
        char contact_no[10];
    } e1;
    printf("enter the student ID:");
    scanf("%d",&e1.ID);
    printf("enter student name:");
    scanf("%s",&e1.name);
    printf("enter the contact number:");
    scanf("%s",&e1.contact_no);
    printf("the student ID is %d\n",e1.ID);
    printf("the student name is %s\n",e1.name);
    printf("The contact number is %s\n ",e1.contact_no);
    return 0;
}
