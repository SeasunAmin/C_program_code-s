#include<stdio.h>
struct person
{
    int age ;
    float salary ;
};
int main()
{
    struct person person[5];
    int i;
    for (i =0 ; i<5; i++)
    {
        printf("Enter the information for person%d \n",i+1);
        printf("Enter age = ");
        scanf("%d",&person[i].age);
        printf("Enter salary = ");
        scanf("%f",&person[i].salary);

    }

    for (i = 0; i<5; i++)
    {
        printf("\n\nInformation for person%d\n",i+1);
        printf("Age = %d\n",person[i].age);
        printf("Salary = %f\n",person[i].salary);


    }



}
