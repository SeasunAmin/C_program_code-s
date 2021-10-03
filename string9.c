#include<stdio.h>
#include<string.h>
int main()
{

    char A[20] = "My name is seasun";
    char B[20] = "My name is seasun";
    int d = strcmp(A,B);
       if (d==0)
       {
           printf("strings are equal");
       }
    else
        printf("Not equal");



}
