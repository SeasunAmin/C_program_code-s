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

   if (person1.age == person2.age && person1.salary== person2.salary)
    printf("person1 is equal to person2");
   else
     printf("person1 is not equal to person2");

getch();


}


