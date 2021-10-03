#include<stdio.h>
int main ()
{
    int num1,num2,num3,sum;
    float ave;
printf("Enter three numbers:  ");
scanf("%d %d%d",&num1,&num2,&num3);
 sum =num1+num2+num3;
 printf(" The sum is : %d'\n",sum);

   ave = (float)sum/3;
   printf("The average is : %.2f ",ave);



}
