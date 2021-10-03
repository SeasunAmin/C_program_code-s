#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
node* head ;
void print()
{
    node* temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
         temp =temp -> next;
    }
    printf("\n");

}

void insert(int value)
{
    node* temp =(struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
 else
 {
     node* newnode;
     newnode = head;
     while(newnode -> next!=NULL)
     {
         newnode = newnode ->next;

     }
    newnode ->next = temp;
 }

}


int main()
{
    head = NULL;
      int i , num, cr;
      printf("How many node you want to print : ");
      scanf("%d",&num);
      for(i=1;i<=num;i++)
      {
          printf("Enter the value of the node %d :",i);
          scanf("%d",&cr);
          insert(cr);
      }
           print();
}

