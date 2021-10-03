#include<stdio.h>
#include<conio.h>

    char name[10] ,default_name[6] ;
    int password;
    int wish, i,count=0;
    int scopes1 =20,scopes2 =20,scopes3 =20,scopes4 =20,scopes5 =20;
    int total=0;
    int choice;
    int want1=0, want2=0, want3=0, want4 = 0, want5 = 0;
    int result1,result2,result3,result4,result5;

    void menu ()
   {
     printf("\n\t!!!.......Hello seasun bro ......!!!");
     printf("\n\n\tWhich operation do you want to perform now?\n");
     printf("\n\t1. Check respiratory\n\t2. Billing\n\t3. Total income of the day\n\n");
      printf("\n Enter your wish : ");
      scanf("%d",&wish);


   }

void  quentaty  ( )
{
                  if (want1 && want2 && want3 && want4 && want5 == 0)
                  {
                      printf("\n\n\t!!..... Bro.......!!\n\n");
                    printf("\n\tYou have left %d scopes of vanilla\n", scopes1);
                    printf("\n\tYou have left %d scopes of chocolate\n", scopes2);
                    printf("\n\tYou have left %d scopes of mocha\n", scopes3);
                    printf("\n\tYou have left %d scopes of butterschoach\n", scopes4);
                    printf("\n\tYou have left %d scopes of mixed fruit\n", scopes5);

                  }

       else

             {

                    printf("\n\n\t!!..... Bro.......!!\n\n");
                    printf("\n\tYou have left %d scopes of vanilla\n", scopes1-=want1);
                    printf("\n\tYou have left %d scopes of chocolate\n", scopes2-=want2);
                    printf("\n\tYou have left %d scopes of mocha\n", scopes3-=want3);
                    printf("\n\tYou have left %d scopes of butterschoach\n", scopes4-=want4);
                    printf("\n\tYou have left %d scopes of mixed fruit\n", scopes5-=want5);

            }


}

void order ()
     {
          printf(".......................FOOD MENU........................\n");
          printf("\n\tVanilla\t\t\t\t80TK\n\n\tchocolate\t\t\t100TK\n\n\tMocha\t\t\t\t120TK\n\n\tButterscotch\t\t\t120TK\n\n\tMixed fruit\t\t\t100TK\n");
          printf("\n.............................................................");
          printf("\n\n\t1. vanilla\n\t2. chocolate\n\t3. mocha\n\t4. butterschoch\n\t5. mixed fruit\n\n");

          printf("\n\t Enter your choice : ");
          scanf("%d",&choice);

           switch(choice)
                  {
                  case 1:
                    printf("\t How many scopes do you want..? == ");
                    scanf("%d",&want1);
                    result1 = 80*want1;
                    printf("\n\t You have to pay(80 x %d) = %d TK\n",want1,result1);
                    break;

                  case 2 :
                    printf("\tHow many scopes do you want..? == ");
                    scanf("%d",&want2);
                    result2 = 100*want2;
                    printf("\n\tYou have to pay (100 x %d) = %d TK\n",want2,result2);
                    break;

                  case 3 :
                    printf("\tHow many scopes do you want..? == ");
                    scanf("%d",&want3);
                    result3 = 120*want3;
                    printf("\n\tYou have to pay (100 x %d) = %d TK\n",want3,result3);
                    break;

                   case 4 :
                    printf("\tHow many scopes do you want..? == ");
                    scanf("%d",&want4);
                    result4 = 130*want4;
                    printf("\n\tYou have to pay (100 x %d) = %d TK\n",want4,result4);
                    break;

                   case 5 :
                    printf("\tHow many scopes do you want..? == ");
                    scanf("%d",&want5);
                    result5 = 150*want5;
                    printf("\n\tYou have to pay (100 x %d) = %d TK\n",want5,result5);
                  break;

                  default :
                  printf("WRONG INPUT.....!!!");
                  }

   }

 void disply()
   {

        printf("\n\n\t.................Hey bro having fun..?...................\n");
            printf("\t.........................................................\n");
            printf("\n\t\t Vanilla sold = %dTk\n",result1);
            printf("\n\t\t Chocolate sold= %dTk\n",result2);
            printf("\n\t\t Mocha sold = %dTk\n",result3);
            printf("\n\t\t Butter scotch sold = %dTk\n",result4);
            printf("\n\t\t Mixed fruite sold = %dTk\n",result5);
            printf("\t.........................................................");

        total +=result1+result2+result3+result4+result5;
        printf("\n\n\t\t YOUR TODAY'S TOTAL INCOME IS  = %d TK \n",total);
        printf("\t.........................................................\n");
  }
 int main()

{
    system("color 0b");
  go :
      {
          printf("\n\n\n\t..................WELLCOM TO LOGIN PORTAL................\n");
        printf("\n\n\t\t\tEnter your username : " ) ;
        gets(name);

       printf("\n\t\t\tEnter your password : ");
       scanf("%d",&password);
        gets(name);


      }

       if (password == 123)
        {
               system("cls");
      while(1)
      {
          menu();

       system("cls");
      switch(wish)
     {
        case 1:
        quentaty();
        printf("\n\n\tPRESS ANY KEY TO BACK MAIN MENU.....");
        getch();
        system("cls");

        break;

       case 2:
        order();
        printf("\n\n\tPRESS ANY KEY TO BACK MAIN MENU.....");
        getch();
        system("cls");
        break;

        case 3 :
        disply();
        printf("\n\n\tPRESS ANY KEY TO BACK MAIN MENU.....");
        getch();
        system("cls");
        break;

    }

}
        }

        else printf("\n\n\t\t Incalide!!!Enter correct password....");
        getch();
        system("cls");
        goto go ;
        getch();
 }








