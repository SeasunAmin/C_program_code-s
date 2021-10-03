#include<stdio.h>
#include<conio.h>

int nor = 0,nob=0,noc=o,amount=0,count=0;
int main()
{
    clrscr();
    switch(Menu())
        {
       case 1:
            Bus();
            break;
       case 2:
           Cycle();
           break;
       case 3:
        Riksha();
        break;
       case 4:
        showDetail();
        break;
       case 5 :
           Delete();
       default :
        printf("\n Invalild");

         }
         getch();
}
void Menu()
{
    int ch;
    printf("\n1.Enter Bus : ");
    printf("\n2.Enter Riksha : ");
    printf("\n3.Enter Cycle :");
    printf("\n4.Show status :  ");
    printf("\n5.Delete data : );
    scanf("%d",&ch);
    return (ch);
}
void Delete
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
}

void showDetail()
{
    printf("\n Number of  Bus = %d",nob);
    printf("\n Number of  Riksha = %d",nor);
    printf("\n Number of  Cycle = %d",noc);
    printf("\n Number of  Vehicle = %d",count);
    printf("\n Total Amount = %d",amount);
}
void Riksha()
{
    nor++;
    amount=amounr+10;
    count++;
}
void Cycle()
{
    noc++;
    amount = amount+10;
    noc++;
}
void Bus()
{
    nob++;
    amount=amount+50;
    nob++;
}
