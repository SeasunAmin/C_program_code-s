#include<stdio.h>
#include<conio.h>

    char name[20];
    char password[10];
    int wish;
    int scopes = 20;

void menu ()
{
     printf("\n\t!!!.......Hello seasun bro ......!!!");
     printf("\n\n\tWhich operation do you want to perform now?\n");
     printf("\n\t1. Check respiratory\n\t2. Billing\n\t3. Total income of the day\n\n");
}
 int main()

{
    printf("Enter your username : " ) ;
    gets(name);

   printf("Enter your password : ");
   gets(password);

    if (name[20] == "seasun" && password[10] == "123")
    printf("hello");
    menu();


  else
    printf ("not ");








}


