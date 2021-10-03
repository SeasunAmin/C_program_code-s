#include<stdio.h>
struct person
{
    char name;
    int age;
    float salary;
};
void display(struct person p)
{
    printf("Name = %s\n",p.name);
    printf("Age = %d\n",p.age);
    printf("Salary = %f\n",p.salary);
}

int main ()
{
    struct person person1;
    strcpy (person1.name,"Nazrul Amin Seasun");
    person1.age = 20;
    person1.salary = 50000.75;
    display(person1);




}
