#include<stdio.h>

struct person
{

int age;
float salary;

};

int main()

{

    struct person person1 = { 23, 3200.55};
   struct person person2,person3;
   // elemeant wise assignment
   person2.age = 33;
   person2.salary = 5500.5;

   // structure wise assignmernt
   person3 = person2;


    printf("Person 1 :\n");
    printf("Age = %d\n",person1),
    printf("Salary = %.2f\n",person1.salary);



    printf("\nPerson 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("\nPerson 3 :\n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

getch();


}

