#include<stdio.h>
int main()
{
    float num1,num2,sum,sub,mul;
    float div;

    printf ("Enter two numbers:  ");
    scanf("%f %f", &num1, &num2);
    sum = num1+num2;
    printf("The sum is  = %f\n",sum);
    sub  = num1 - num2;
    printf("The sub is  = %f\n",sub);
    mul = num1 * num2;
    printf("The mul is = %f\n",mul);
    div = (num1+num2)/2;
    printf("The div is = %f",div);


}

