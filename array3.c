#include<stdio.h>
int main ()
{

    int a[ 5 ], sum=0, i;
printf("Enter five nubers: ");
for (i=0; i<5; i++)
{
    scanf("%d",&a[i]);
}
     for (i=0;  i<=4;  i++)
     {
         sum = sum + a[i];

     }

     printf("The sum is %d\n",sum);
     printf("The average is %.2f\n",(float)sum/5);
}
