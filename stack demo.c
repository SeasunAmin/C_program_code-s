# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# define MAX 6
int stack[7];
int top = 0;
int menu()
{
int ch;
system("cls");
system("color f1");
printf("\n\tStack operations using ARRAY... ");
printf("\n\t===============================\n");
printf("\n 1. Push ");
printf("\n 2. Display");
printf("\n Enter your choice: ");
scanf("%d", &ch);
return ch;
}
void main()
{
int ch;
do
{
ch = menu();
switch(ch)
{
case 1:
push();
break;

case 2:
display();
break;
}
getch();
} while(1);
}


void display()
{
int i;
if(top == 0)
{
printf("\n\nStack empty..");
return;
}
else
{
printf("\n\nElements in stack:");
for(i = 0; i < top; i++)
printf("\n\tWhen Top %d=%d",i,stack[i]);
}
}

void push()
{
int data;
if(top == 7)
{
printf("\n\nStack Overflow..");
return;
}
else
  {
p:
printf("\n\nEnter data: ");
scanf("%d", &data);
   if(data%2 !=0)
      {
       printf("You insert Odd number..!!");
       goto p;
      }
   else
      {
        stack[top] = data;
        top = top + 1;
        printf("\n\nData Pushed into the stack");
      }
  }
}




