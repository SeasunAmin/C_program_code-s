#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node ;
node* head ;
void print()
{
    node* temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp =temp ->next;
    }
    printf("\n");
}

 int insert(int value)
 {
     node*temp ;
     temp = (struct node*)malloc(sizeof(struct node));
     temp ->data = value;
     temp -> next = NULL;
     if(head == NULL)
     {
    head = temp;
     }
  else
  {
    node*newnode;
    newnode = head;
    while(newnode->next!=NULL)
    {
        newnode = newnode -> next;
    }
    newnode->next=temp;
  }
 }


int main()

{
    int num,i,in;
    head = NULL;
    printf("How many node you want to create : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("Enter the value %d :",i);
        scanf("%d",&in);
         insert(in);
    }
    printf("Your node is created\n");
   print();


getch();
}
