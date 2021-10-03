#include<stdio.h>
int main()
{
    int x = 5 , y = 10 , z = 15;
    int *point;

     point = &x;
     printf("x = %d\n",*point);

     point = &y;
     printf("y = %d\n",*point);

     point = &z;
     printf("z = %d\n",*point);

    getch();
}
