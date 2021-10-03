#include<stdio.h>
int main()
{
    int num;
    printf("1.Pepsi  \n2.seven up \n3.cocacola\n");
    printf("Enter your choice : ");
    scanf("%d",&num);
   if (num == 1)
    printf("for pepsi you have to pay 50 tk");

   else if(num==2)
     printf("for seven up you have to pay 40 tk");

    else if(num==3)
     printf("for cocacola you have to pay 30 tk");
   else
    printf("error");

getch();

}
