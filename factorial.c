#include<stdio.h>
int main ()
{

    int n,i,fact =1;
    printf("Enter any possitive number: ");
    scanf("%d",&n);
    for (i = 1; i<=n;i++)
    {
        fact = i * fact;


    }
    printf(" Factoril = %d\n",fact);


}
