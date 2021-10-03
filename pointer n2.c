#include<stdio.h>
int main()
{
     int x = 10 ;
     int *point ;

     point = &x;


     printf("value of x = %d\n",x);
     printf("address  of  x = %d\n",&x);
     printf("value of point  = %d\n",point);
      printf("%d\n",*point);



    getch();
}
