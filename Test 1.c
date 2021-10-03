#include<stdio.h>
int main()
{
 char ch;
 int n,m,p;
 int i;

 printf("What's your name? = ");
 scanf("%s",&ch);
 system ("cls");
printf("Hello dear %s,\nMy name is Fana. \nDo you want to talk with me?\n");
printf("    1.Yes\n");
printf("    2.No\n");
printf("Enter your opinions : ");
scanf("%d",&n);
system ("cls");

   if (n==1)
  {
      printf("  Thank you very much\n");
      printf("   1.Are you single?\n");
      printf("   2.Or in a relationship?\n");
      printf("Enter your opinions : ");
      scanf("%d",&m);
      system ("cls");
    if(m== 1 )
        {
            printf("  WOW realy...! i am also single.\n");
            printf("  1.Do you want to start a relationship with me?\n");
            printf("  2.Or not?\n");
            printf("Enter your opinions : ");
            scanf("%d",&p);
            system ("cls");
            if (p==1)
            {
                printf("  I love you too sweet heart!");
                printf("  We will be the best couple in the world.\n");


            }
          else printf("  Then Fuck you");

        }
    else printf("   Fuck you");
  }


   else
        {
            printf("    Fuck you ");
        }






getch();
}
