#include<stdio.h>
int main()
{
    char A[30] ="Nazrul Amin Seasun";
    char B[30];

    int i =0, len =0, j;
while(A[i]!= '\0')
    {
        i++;
        len++;
    }

    for(j = 0, i=len - 1; i>=0; i--, j++)
          {
                  B[j] = A[i];
          }
               B[j] = '\0';


     printf("Strings: %s\n",A);
     printf("Strings: %s\n",B);

}
