#include <stdio.h>
int main()
{

int num,po;
int result=1;

printf("enter the number : ");
scanf("%d",&num);
printf("enter the power : ");
scanf("%d",&po);
while (po != 0)
    {
 result *= num;
        --po;
    }
printf("Answer = %d",result);
}
