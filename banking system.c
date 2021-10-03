  #include<stdio.h>
  int  total = 500;
  char name[30];
  int d=0,w=0,t=0,di;
  int a;

int main()

 {

        printf("             Welcome To X Bank \n");
        for(int dot =1;dot<=45;dot++)
            printf(".");
        printf("\n  Enter your name  : ");
        gets(name);
        printf("\n  Enter your account number : ");
        scanf("%d",&a);
        system ("cls");




   while(1)
  {

       printf("             Welcome To X Bank \n");
            for(int dot =1;dot<=45;dot++)
            printf(".");
     printf("\n                  MENU\n");
     for(int dot =1;dot<=45;dot++)
            printf(".");

    printf("\n         1.Diposite Ammount.");
    printf("\n         2.Withdrow Ammount.");
    printf("\n         3.Transfer Ammount.");
    printf("\n         4.Chack Detail's.");
    printf("\n         5.Exit.");

    printf("\n \n  Enter your choice : ");
    scanf("%d",&a);
    system ("cls");


                switch(a)
                  {
                     case 1:

                     printf("\n How much you want to Diposite : " );
                     scanf("%d",&d);
                         total += d;
                         system ("cls");

                     printf("Your Diposite is successfully done.\n");
                     printf("\n\nENTER ANY KEY TO BACK MENU");
                         getch();
                        system ("cls");
                     break;


                  case 2 :
                       printf("How much you want to withdrow : ");
                       scanf("%d",&w);
                       system ("cls");

                          if (w<=total)
                          {

                                    total-=w;
                                   printf("Your withdrow is successfully done.\n");
                                   printf("\n\nENTER ANY KEY TO BACK MENU");
                                   getch();
                                   system ("cls");
                          }

                          else
                                 printf("       Invalid\n       Withdrow is not possible.\n");
                                   printf("\n\n     ENTER ANY KEY TO BACK MENU");
                                getch();
                                 system ("cls");

                                  break;


                  case 3:
                     printf("How much you want to transfer : "  );
                     scanf("%d",&t);
                     system ("cls");

                     if (t<total)
                        {
                            total -= t;
                            printf("Your transfer is successfully done.\n");
                            printf("\n\nENTER ANY KEY TO BACK MENU");
                            getch();
                            system ("cls");
                        }

                     else
                         printf("Invalid\nTransfer is not possible.");
                         printf("\n\nENTER ANY KEY TO BACK MENU");
                         getch();
                         system ("cls");
                         break;


                  case 4 :
                        printf("      Account Detail's \n      Name: %s\n",name);

                       for(int dot =1;dot<=45;dot++)
                       printf(".");


                        printf("\n      Diposite  = %d",d);
                        printf("\n      Withdrow  = %d",w);
                        printf("\n      Transfer  = %d",t);
                        printf("\n");



                        for(int dot =1;dot<=45;dot++)
                        printf(".");
                        printf("\n      Main Balance : %d",total);
                        printf("\n\nENTER ANY KEY TO BACK MENU");
                        getch();
                        system ("cls");
                        break;

                  case 5:
                    exit(0);

                  default :
                     printf("        Invalid");
                     printf("\n\n      ENTER ANY KEY TO BACK MENU");

                  }


    }
  getch();

}



