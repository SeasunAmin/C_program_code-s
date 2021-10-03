
#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],i,j,row,col;
    printf("Enter the numbers of row and colum of the matrix : ");
        scanf("%d %d",&row,&col);
        //getting the elements of the matrix
              for (i =0; i<row; i++)
              {
                   for (j =0; j<col; j++)
                        {
                            printf("A[%d][%d] = ",i ,j);
                            scanf("%d",&A[i] [j]);
                        }
              }
          // transposing
            for (i=0; i<row; i++)
            {
                for (j=0; j<col; j++)
                {
                    transpose[j][i] = A[i][j];
                }


            }

              //printing entered matrix
         printf("\nEntered Matrix\n");
            for(i=0;i <row; i++)
            {
                for (j=0; j<col; j++)
                {
                    printf("%d ", A[i] [j]);
                }
                            printf("\n");
             }
//printing transpose matrix
     printf("\nTranspose Matrix \n");
        for(i=0; i<col; i++)
        {
            for(j=0; j<row; j++)
                  {
                      printf("%d ",transpose[i][j]);
                  }
                      printf("\n");
         }





}
