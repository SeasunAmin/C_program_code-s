#include<stdio.h>
int main()
{

    while(1)
    {

        char ch;
    printf("Enter any letter:  ");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e' || ch=='i' ||ch=='o' ||ch=='u' )
        printf("The letter is vowel");
    else
        printf("consonant");
getch();
system("cls");


    }



}
