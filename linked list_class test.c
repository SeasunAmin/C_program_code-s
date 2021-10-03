#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct seasun{
int data;
struct seasun*next;
}amin;

amin*start=0;
amin*newnode,*tm;
amin*getnode();
int create_sll();

void Display();
int main()
{
    system("color F4");
    printf("\n\n\tCreate list...\n\t=============");
    start=create_sll();
    printf(" create sucessfully.....");
    Display(start);
}
int create_sll()
{
    int n,i;
    printf("\n\n\nHow many node do you want to create:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        newnode = getnode();
        if(start==0)
            start=newnode;
        else
            {
                 tm=start;
        while(tm->next !=0)
                 tm=tm->next;
                 tm->next=newnode;
            }
        }
    return start;
    getch();

}


  amin* getnode()
{
    amin*newnode;
    newnode=(amin*)malloc(sizeof(amin));
    printf("\nEnter Data:");
    scanf("%d",&newnode -> data);
    newnode -> next=0;
return newnode;
}
void Display()
{
    tm=start;
    if(start==0)
        printf("Empty list");
    else{   printf("\n=============");
            printf("\n|Data | Next| ");
            printf("\n=============\n");
        while(tm!=0)
            {
            printf("\n===============");
            printf("\n| %d | %d|", tm-> data,tm -> next);
            printf("\n===============");
            tm=tm->next;
            }
    }getch();
}

