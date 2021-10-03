#include<stdio.h>
int main()
{

    int A[3][3], i, j,upersum=0,lowersum=0;
    printf("Enter the elements of Matrix\n");
             for(i=0; i<3; i++)
             {
                 for (j = 0; j<3; j++)
                 {
                      printf("A[%d][%d] =",i,j);
                      scanf("%d",&A[i][j]);
                 }

            }
    printf("\nEntered Matrix\n");
         for(i=0; i<3; i++)
         {
             for(j= 0; j<3; j++)
             {
                 printf("%d ",A[i][j]);

             }
             printf("\n");
         }


             for (i =0; i<3; i++)
             {
                   for(j=0; j<3; j++)
                          {
                                if (i<j)
                                    {
                                        upersum = upersum + A[i][j];
                                    }
                               if (i>j)
                                    {
                                        lowersum = lowersum + A[i][j];
                                    }

                         }

             }
printf("\nsum of the uper triangle is:%d\n",upersum);
printf("\nsum of the lower triangle is:%d\n",lowersum);

}

