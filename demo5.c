#include<stdio.h>
struct person
{
    int age;
    int salary;
};

int main ()
{
struct person person1,person2;
person1.age = 23;
person1.salary   =  300000;
printf("Information's for person 1\n");
printf("age =%d\n",person1.age);
printf("salary =%d\n",person1.salary);


}
