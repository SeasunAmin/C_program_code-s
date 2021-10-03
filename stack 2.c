#include<stdio.h>
#define capacity 6
int stack[capacity];
int top = -1;
int value;

   void push()
{
  if(top > 6)
    printf("stack's space is over\n ");
  else if (value%2!=0)
    printf("you enter a odd value,please enter a even value.\n");
  else
    {
        top = top + 1;
         stack[top]=value;
    printf("stack is succesfully added.\n");
    }
}

void disply()
{
    int i;
    if(top<0)
     {
            printf("stack is empty!!");
            return;
     }

  {
      for(i=0;i<=top;i++)
          printf("Stack %d element is %d\n",i,stack[i]);
  }
}


int main()
{

 int choice;
while(1)
{

 printf("\t\tImplementing my stack in c.\n\n ");
 printf("1.Push\n");
 printf(" 2.Disply\n");
 printf("Enter your choice : ");
 scanf("%d",&choice);
system("cls");

     switch(choice)
 {
 case 1:
  printf("Enter the element's of stack : ");
  scanf("%d",&value);
        push();
       getch();
       system("cls");
       break;


 case 2:
    disply();
    getch();
    system("cls");
    break;
 }


}
   return 0;

}






