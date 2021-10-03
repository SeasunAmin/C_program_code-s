#include<stdio.h>
int main()
{

        int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
        printf("Enter Row and Colum for first Matrix = ");
        scanf("%d%d",&r1,&c1);
        printf("\nEnter Row and Colum for second Matrix = ");
        scanf("%d%d",&r2,&c2);
          while(c1!=r2)
             {
               printf("404 ERROR ,Colum of first matrix is not equal to row of second matrix\n");
              printf("\nEnter Row and Colum for first Matrix = ");
        scanf("%d%d",&r1,&c1);
        printf("\nEnter  Row and Colum for second Matrix = ");
        scanf("%d%d",&r2,&c2);
             }
    // taking input first matrix
    printf("\nEnter the elements for first matrix \n");
    for (i = 0; i<r1; i++)
           {
              for (j = 0; j<c1; j++)
              {
                  printf("First Matrix[%d][%d] =",i,j);
                 scanf("%d",&first[i][j]);
              }

           }
  // taking input second matrix
  printf("\nEnter the elements for second matrix \n");
         for (i = 0; i<r2; i++)
           {
              for (j = 0; j<c2; j++)
                {
                    printf("Second Matrix[%d][%d] =",i,j);
                    scanf("%d",&second[i][j]);
                }
           }

        // multipying matrix
           for(i=0; i<r1; i++)
           {
                    for(j=0;j<c2;j++)

                     {
                             for     (k=0;k<c1;k++)
                             {
                                 sum=sum+ first[i][k] *second[k][j];
                             }
                       result[i] [j]=sum;
                       sum = 0;
                     }



           }

        // printing first matrix
         printf("\nFirst Matrix =\n" );
          for (i = 0; i<r1; i++)
           {
              for (j = 0; j<c1; j++)
                printf("%d ",first[i][j]);
             printf("\n");
          }

       // printing second matrix
         printf("Second Matrix =\n");
          for (i = 0; i<r2; i++)
           {
              for (j = 0; j<c2; j++)
                printf("%d ",second[i][j]);
                printf("\n");
          }

  // printing result matrix
         printf("Result Matrix =\n");
          for (i = 0; i<r1; i++)
           {
              for (j = 0; j<c2; j++)
                printf("%d ",result[i][j]);
                printf("\n");
          }


}
