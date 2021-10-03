#include<stdio.h>
int main ()
{
    int x = 10, y = 20, z = 30;
    int *po;
    po = &x;
    printf("X = %d\n",*po);
    po = &y;
    printf("Y = %d\n",*po);
    po = &z;
    printf("Z = %d\n",*po);



}



