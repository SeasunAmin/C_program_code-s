#include<stdio.h>
int main()
{
    int x=5,y=10,sum;

    int *point1 , *point2;

    point1 = &x;
    point2 = &y;
     sum = *point1 + *point2;

      printf("The sum is = %d ",sum);



    getch();
}
