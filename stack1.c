#include<stdio.h>
#define capacity 3
int stack[capacity];
int top = -1;

void push(int x)
{
    if(top<capacity -1)
    {
        top = top + 1;
        stack[top] = x ;
    printf("Successfully added item %d\n",x);
    }
    else
      {
            printf("Exception! NO Space.\n");
      }
}
int pop()
{
    if(top >=0)
    {
        int value = stack[top];
        top = top -1;
        return value;
    }
    printf("Exception form pop! Empty stack.\n");
    return -1 ;
}
int peek ()
{
    if( top >= 0)

        return stack[top];

        printf("Exception from pop! NO space.");
    return -1;
}
int main()
 {
   printf(" Implementing my stack in c.\n ");
   pop();
   push(10);
   push(20);
   push(30);
   printf("POP item : %d\n",pop());
   push(40);
   printf("Top of stack %d\n",peek());
   getch();
   return 0;



}
