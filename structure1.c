#include<stdio.h>

struct person
{

int age;
float salary;

};

int main()

{

    struct person person1, person2;
    person1.age = 22;
    person1.salary =12000.75;
    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2.age = 34;
    person2.salary =15400.75;
    printf("Person 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

getch();
}
