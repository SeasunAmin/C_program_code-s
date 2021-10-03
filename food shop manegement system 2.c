
# include <stdio.h>
#include<conio.h>
# define MAX 8
int shop[MAX];
int front = 0;
int rear = 0;
int count = 0;
void insertPeople()
{
int data;
if(count == MAX)
{
printf("\n Customer is overflew...!!!");
getch();
system("cls");
}
else
{
printf("\n Enter Customer ID ");
scanf("%d", &data);
shop[rear] = data;
rear = (rear + 1) % MAX;
count ++;
printf("\n Customer ID is Added ");
getch();
system("cls");
}
}
void deletePeople()
{
if(count == 0)
{
printf("\n\nYou already delivered your pastry to all customer ..");
getch();
system("cls");
}
else
{
printf("\n Your delivery people ID :  %d ", shop[front]);
front = (front + 1) % MAX;
count --;
getch();
system("cls");
}
}
void display()
{
int i, j;
if(count == 0)
{
printf("\n\n\t Waiting list is empty....");
getch();
system("cls");
}
else
{
printf("\n Waiting list is -> ");
j = count;
for(i = front; j != 0; j--)
{

printf("%d\t", shop[i]);

i = (i + 1) % MAX;
}
getch();
system("cls");
}
}
int menu()
{
int ch;
printf("\n \t\t\tWelcome To Alina's Pastry  Shop");
printf("\n \t *******************************************************\n");
printf("\n\t 1. People's Entry.");
printf("\n\t 2. Delivery.");
printf("\n\t 3. Display Pending Order.");
printf("\n\t 4. About me.");
printf("\n\t 5. Exit.");

printf("\n\n Enter Your Choice: ");
scanf("%d", &ch);
return ch;
}
int main()
{
    system("color 4b");
int ch;
do
{
ch = menu();
switch(ch)
{
case 1:
insertPeople();
break;
case 2:
deletePeople();
break;
case 3:
display ();
break;
case 4:
    printf("\n\n\t Nazrul Amin Seasun\n\t Department of Computer Science and Engineering\n\t Northern University Bangladesh." );
    printf("\n\n\n\t Press any key to back menu");
        getch();
        system("cls");
    break;
case 5 :
    printf("\n\n................Thank you for your visit...............");

    exit(0);


    system("cls");
    break;
default:
printf("\n Invalid..!!! Enter right option..... ");
}
} while(1);
return 0;
}
