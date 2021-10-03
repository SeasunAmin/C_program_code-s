#include<stdio.h>
void display(int x[])

        {
            int i ;
                  for (i =0; i<=8;i++)
                   {
                  printf("%d ",x[i]);
                   }

        }

int main()
{

    int A[] ={10,20,30,40,50,60,70,80,90};

    display(A);



}
