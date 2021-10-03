#include<stdio.h>
int main()
{
    char A[50];
    int i,capital,small,digit;
  i=capital=small=digit=0;
     printf("Enter any string:");
     gets(A);
     while(A[i] !='\0')
     {
         if (A[i]>=65 && A[i]<=90)
            capital++;
         else if (A[i]>=97 && A[i]<=122)
            small++;
         else if (A[i]>=48 && A[i]<=57)
            digit++;


         i++;
     }

    printf("Number of capital letter is = %d \n",capital);
     printf("Number of small letter is = %d \n",small);
     printf("Number of  digit is = %d \n",digit);





}
