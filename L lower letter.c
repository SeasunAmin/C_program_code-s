#include<stdio.h>
int main ()
{

    char lower,upper;
    printf("Enter any uppercase letter:  ");
    scanf ("%c",&upper);
    lower= tolower(upper);
    printf("The lower letter is =%c",lower);



}
