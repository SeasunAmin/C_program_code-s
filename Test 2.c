#include<stdio.h>
int main ()
{
    char ch[10];
    int a,b,c;
    printf("What is your name? = ");
    scanf(" %s",&ch);
    printf("Hello dear %s.\nMy name is Momo,Do you want to talk with me?\n",ch);
    printf("1.Yes let's talk.\n");
    printf("2.Sorry I can't.\n");
    scanf("%d",&a);
    if(a==1)
     {

        printf("Thank you very much.\nWill you be my friend?\n");
        printf(" 1.Yes,why not.\n ");
        printf("2.Sorry,I can't\n");
        scanf("%d",&b);
        if (b==1)
        {
           printf("Great,Thanks a lot.");

        }
             else printf("Go to hell.\n");


     }


else printf("Then ok,You may go to hell.");



getch();
}
