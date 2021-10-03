
#include<stdio.h>
int main()
{

    double i,sum= 0,num;
    printf("Enter n= ");
    scanf("%lf",&num);
    for(i=1; i<=num;i++)
    {

        sum = sum+(1/i);
      if (i==1)
       printf("\n 1+");

       else if (i==num)
      printf("(1/%lf)",i);
       else
        printf("(1/%lf)+",i);
       }
    printf("sum=%.2lf\n",sum);


}
