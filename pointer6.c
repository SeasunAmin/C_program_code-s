#include<stdio.h>
int main()
{
       int a[5] = {10,20,30,40,50};
       int *po,i;
     po = &a[0];
     for (i = 0; i<5; i++)
     {
         printf("%d\n",*po);
         po++;
     }




}
