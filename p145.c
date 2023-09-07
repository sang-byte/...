#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
int main()
{
    struct date birth_date = {01,01,1973};

    int current_date,current_month,current_year;
    printf("Enter the current date:");
    scanf("%d",&current_date);
    printf("Enter the current month:");
    scanf("%d",&current_month);
    printf("Enter the current year:");
    scanf("%d",&current_year);
    int age = current_year - birth_date.year;
    if(current_month < birth_date.month ||(current_month==birth_date.month && current_date<birth_date.date))
    {
        age--;
    }
    printf("student age:%d\n",age);
    return 0;
}

