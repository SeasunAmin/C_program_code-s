#include<stdio.h>
int main ()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);

    if (marks>=80)
        printf("A+");
    else if (marks>=70)
        printf("A");

    else if (marks>=60)
        printf("B");

    else if (marks>=50)
        printf("C");
    else if (marks>=33)
        printf("D");
        else
            printf("fail");




}
