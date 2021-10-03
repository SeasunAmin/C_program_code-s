#include<stdio.h>
int main()
{

    int num[]= {10, 11, 12, 21, 22, 24, 31};

    int value,i,pos=-1;
    printf("Enter the number you want to search: ");
    scanf("%d",&value);

    for (i =0; i<7;  i++ )

    {
       if (value == num[i])

          {
              pos  = i + 1;
              break;
          }


    }

      if  (pos == -1)
      {
          printf("Not Found");
      }

     else
        printf("The position of the number is = %d",pos);




}
