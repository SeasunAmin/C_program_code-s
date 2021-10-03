#include<stdio.h>
int main ()
{

    int result = fact (5);
    printf("The factorial is =%d\n",result);



}
int  fact(int n)
{
     if (n==0)
        return 1;
    else
        return n*fact(n-1);

}


