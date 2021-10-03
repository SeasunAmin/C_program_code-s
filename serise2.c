#include<stdio.h>
int main()
{

    int i,n,sum =0;
    printf("Enter n= ");
    scanf("%d",&n);

      for (i=n;i>=1;i--)
      {
          if (i>1)
            printf("%d+",i);
          else
          printf("%d ",i);
          sum = sum+i;
      }
    printf("sum = %d",sum);
    getch();


}
