#include<stdio.h>
void swap(int*,int*);
int main()
{
 int a,b;
 printf("enter the values of a and b\n");
 scanf("%d %d",&a,&b);
 printf("before swapping:a=%d and b=%d\n",a,b);
 swap(&a,&b);
 printf("\n after swapping:a=%d and b=%d\n",a,b);
 return 0;
}
void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
