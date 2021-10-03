#include<stdio.h>
int maximam(int x[])

        {
            int i ;
            int max =x[0];
                  for (i =1; i<=8;i++)
                   {
                 if (max<x[i])
                 max = x[i];
                   }
return max;
        }

int main()
{

    int A[] ={10,20,30,40,50,60,100,80,90};
   int maximamvalu = maximam(A);
    printf("Maximam valu is = %d\n",maximamvalu);



}
