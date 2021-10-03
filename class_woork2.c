#include<stdio.h>
#include<string.h>
int main()

{
     char name [20];
     char pass [20];
     char name2 [20];
     char pass2 [20];
     int i;
    char log;

    printf("Enter your name : " );
    gets(name);
    printf("\nEnter your password : ");
    gets(pass);

   printf("Do you want to login ?(y or n )\n");
   scanf("%s",&log);
   if (log == 'y' )
   {
    for(i=0;i<=3;i++)
    {
        printf("\nEnter your name : " );
    gets(name2);
    printf("\nEnter your password : ");
    gets(pass2);
   int c  = strcmp(name,name2);
   int p =  strcmp (pass,pass2);
    if(c == 0 && p == 0)
        printf("Welcome");
   else
    printf("Wrong input");


    }
   }
else
      printf("Ok Thank you");
}
