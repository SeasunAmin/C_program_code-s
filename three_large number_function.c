#include<stdio.h>
int num1,num2,num3;
void disply()
{
    if(num1>num2 && num1>num3)
    printf("The largest is Number1 ");
  else if(num2>num1 && num2>num3)
printf("The largest is Number2");
else
printf("The largest is Number3");
}
int main()
{

printf("Enter the Number1 :");
scanf("%d",&num1);
printf("\nEnter the Number2 :");
scanf("%d",&num2);
printf("\nEnter the Number3 :");
scanf("%d",&num3);
disply();

      return 0;
}
