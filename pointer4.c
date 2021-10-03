#include<stdio.h>
int main ()
{
    int x = 10, y = 20,temp;
    int *po1, *po2;
    po1 = &x;
    po2 = &y;
   // swaping
    temp = *po1;
    *po1 = *po2;
    *po2 = temp;
    printf("x = %d\n",x);
    printf("y = %d\n",y);


}
