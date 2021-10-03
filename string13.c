#include<stdio.h>
int main()
{

     char A[20]= "Bangladesh";
     char B[20] ="Finland";
     char temp [20];
     printf("Before swapping\n");
     printf("stering: %s\n",A);
    printf("stering:%s",B);
     strcpy (temp,A);
     strcpy (A,B);
     strcpy (B,temp);
    printf("\n\nAfter swapping\n");
     printf("stering :%s\n",A);
    printf("stering:%s",B);






}
