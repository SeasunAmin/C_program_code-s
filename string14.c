#include<stdio.h>
int main()
{
    char A[20 ]= "NAZRUL AMIN SEASUN";
    char B[20] ="nazrul amin seasun";
     printf("Befor uper and lower\n");
     printf(" number 1%s\n",A);
     printf("number 2%s\n",B);

    strlwr(A);
    strupr(B);
    printf("\n\nAfter uper and lower\n");
    printf(" number 1%s\n",A);

     printf("number 2%s\n",B);


}
