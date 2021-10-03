#include<stdio.h>
void swapping (int *po1,int *po2)
{
    int temp ;
    temp = *po1;
    *po1 = *po2;
    *po2 = temp;


}
int main ()

{
    int x = 10, y = 20;
    printf("Beofor swapping : x = %d,y = %d\n",x,y );
    swapping(&x,&y);
    printf("After swapping : x = %d,y = %d\n",x,y );


}
