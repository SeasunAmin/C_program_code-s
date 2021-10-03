#include<stdio.h>
#include<conio.h>
int main()
{
     system( "color 0A");
     int  total = 500;
     char name[30];
     int a;
         printf("             Welcome To X Bank :)\n");
         printf("...............................................\n");
         printf("Enter your name  : ");
     gets(name);
     printf("\nEnter your account number : ");
     scanf("%d",&a);
     system ("cls");

    printf("\n1.Diposite Ammount.");
    printf("\n2.Withdrow Ammount.");
    printf("\n3.Transfer Ammount.");
    printf("\n4.Chack Detail's.");
    printf("\n5.Exit.");

    printf("\nEnter your choice : ");
    scanf("%d",&a);
    system ("cls");

        int d,w,t,di;
int i;
                  switch(a)
                  {
                     case 1:

                     printf("\n How much you want to Diposite : " );
                     scanf("%d",&d);
                         total += d;
                         system ("cls");

                     printf("Your Diposite is successfully done.\n");
                     printf("Your balance is now %dtk.\n",total);
                     break;


                  case 2 :
                       printf("How much you want to withdrow : ");
                       scanf("%d",&w);
                       system ("cls");

                        if (w>total)
                        printf("\nInvalide\nWithdrow is not possible.\n");
                          else
                            {
                                   total-=w;
                                   printf("Your withdrow is successfully done.\n");
                                   printf("Your balance is now %dtk.\n",total);
                            }
                           break;

                   case 3:
                     printf("How much you want to transfer : "  );
                     scanf("%d",&t);
                     system ("cls");
                     if (t>total)
                        printf("Invalid.\nTransfer is not possible.\n");
                     else
                     {
                         total -= t;
                         printf("Your transfer is successfully done.\n");
                         printf("Your balance is now %dtk.\n",total);
                         break;
                     }
                  case 4 :
                      printf("hello");


             }
getch();


}
