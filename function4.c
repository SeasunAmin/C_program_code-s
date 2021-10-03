#include<stdio.h>
int main()
{

    double base, exp, result=1,i;
    printf("Enter the base = ");
    scanf("%lf",&base);
    printf("Enter the exp = ");
    scanf("%lf",&exp);
    //result = pow(base,exp);
             for (i=1;i<=exp;i++)
                 {
                     result =result * base;
                 }

    printf("The result is = %.2lf\n",result);







}
