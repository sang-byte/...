#include<stdio.h>
int main()
{
    struct student_records

    {
        int roll_number;
        char name[25];
        char marks[10];
        int total;
        float avg;
    } student[5];
    int main()
    {
        int i,j;
        struct student s;
        for(i=0; i<5; i++)
        {

            printf("enter the roll number:");
            scanf("%d",&student[i].roll_number);
            printf("enter student name:");
            scanf("%s",&student[i].name);
            student[i].total=0;
            for (j=0; j<4; j++)
            {
                printf("Enter the marks of each subject %d\n",j);
                scanf("%d",&student[i].marks);
                student[i].avg=stud[i].total+student[i].mark ;
                student[i].avg=stud[i].total/3;
            }
            for(i=0; i<5; i++)
            {
                for(j=i+1; j<5; j++)
                {
                    if(student[i].total<student[j].total)
                    {
                        s=student[i];
                        student[i]=student[j];
                        student[j]=s;

                    }
                }
            }
            printf("\n roll number name total marks avg\n");
            for(i=0; i<5:i++)
            {
                printf("\n %d\c %s\c %d\c %.2f",student[i],roll_number,student[i]);
            }
            return 0;
        }
