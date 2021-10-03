#include<stdio.h>
int main ()
{
    int x = 10, y = 20,sum;
    int *po1, *po2;
    po1 = &x;
    po2 = &y;
    sum = *po1 + *po2;
    printf("The sum is = %d\n",sum);



}
