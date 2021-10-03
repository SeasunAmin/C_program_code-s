#include<stdio.h>
void print (int a)
{
    int num;
        for(int i=1;i<=a;i++)
        printf("\t%d\n",i);

}
int main()

{
        int num;
        printf("Enter any number   : ");
        scanf("%d",&num);
        print(num);

}
