#include<stdio.h>
int main
{
int a ,b,c,d,e;

printf("What you want to buy?\n");
printf("1. speed\n");

printf("2. 7up\n");

printf("3. pepsi\n");
printf("4. mojo\n");
printf("5. tiger\n");
printf("Enter your choice. = ");
scanf("%d",&a);


        if (a==1)
    {
        printf("You have to pay 25 tk.\n");
    }
       else if (a==2)
        {
            printf("You have to pay 35 tk.\n");
        }
       else if (a==3)
         {
             printf("You have to pay 30 tk.\n");
         }
    else if (a==4)
         {
             printf("You have to pay 15 tk.\n");
         }
        else if (a==5)
         {
           printf("You have to pay 25 tk.\n");
         }
         else
         {
                         printf("404 ERROR .! enter the right key.");
         }




    getch();
}
