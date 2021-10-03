#include<stdio.h>
int main()
{

    char A[50] = "My name is seasun,";
    char B[] = " I am a student.";
    int len = 0,i=0,j=0;
    while (A[i]!= '\0')
    {
        i++;
            len++;
    }
     while (B[j]!= '\0')
     {
         A[len + j] = B[j];
         j++;
     }

    printf("%s\n",A);

}
