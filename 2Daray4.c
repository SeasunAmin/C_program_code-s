#include<stdio.h>
int main()
{
    int i,j,numberOfrow,numberOfcollam;
    int A[10][10] ,B[10] [10] ,C[10] [10];

    printf("Enter the number of Rows and Collams = ");
    scanf("%d %d",&numberOfrow,&numberOfcollam);

     printf("Enter elementas for A matrix.\n");
      for (i = 0; i<numberOfrow; i++)
       {
           for(j =0; j<numberOfcollam; j++)
           {
               printf("A[%d][%d] = ",i,j);
               scanf("%d",& A[i] [j]);
           }
                 printf("\n");
           }

          printf("Enter elementas for B matrix.\n");
      for (i = 0; i<numberOfrow; i++)
           {
           for(j =0; j<numberOfcollam; j++)
           {
               printf("B[%d][%d] = ",i,j);
               scanf("%d",& B[i] [j]);
           }
                 printf("\n");
           }
       printf("\nA =");
      for (i = 0; i<numberOfrow; i++)
      {
          printf("\t");
            for (j = 0; j<numberOfcollam; j++)
            {
                printf("%d ",A[i][j]);
            }
               printf("\n");
      }




       printf("\nB = ");
      for (i = 0; i<numberOfrow; i++)
      {
          printf("\t");
            for (j = 0; j<numberOfcollam; j++)
            {
                printf("%d ",B[i][j]);
            }
               printf("\n");
           }


      for (i = 0; i<numberOfrow; i++)
      {

            for (j = 0; j<numberOfcollam; j++)
            {
               C[i][j] = A[i][j]  + B[i][j];
            }

      }

  printf("\nA+B = ");
      for (i = 0; i<numberOfrow; i++)
      {
          printf("\t");
            for (j = 0; j<numberOfcollam; j++)
            {
                printf("%d ",C[i][j]);
            }
               printf("\n");
     }




}
