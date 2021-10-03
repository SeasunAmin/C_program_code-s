#include<stdio.h>

struct person
{

int age;
float salary;

};

int main()

{

    struct person person1, person2;
    printf("Enter the informations of person 1\n");
    printf("Enter age : ");
    scanf("%d",&person1.age);
    printf("Enter salary : ");
    scanf("%f",&person1.salary);
    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


   printf("\n\nEnter the informations of person 1");
   printf("\n\Enter age : ");
    scanf("%f",&person2.age);
    printf("Enter salary : ");
    scanf("%d",&person2.salary);
    person2.age = 34;
    person2.salary =15400.75;
    printf("Person 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

getch();
}

