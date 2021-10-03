#include<stdio.h>
int main ()
{
    int num;
    printf("Hello miss Alina\n\n");
    printf("What do you want to calculate.?\n");
    printf("Press 1 for payment to the employee\n");
    printf("Press 2 for payment to the vendors\n");
    printf("Press 3 for net profit per month\n");
    scanf("%d",&num);
    int e1,e2,e3,e4,e5,b1,b2,b3,b4,b5,m;
    switch(num)
    case 1:
    {
        printf("\nEnter salary of Employee 1 : ");
        scanf("%d",&e1);
        printf("Enter percentage of bonus of employee 1 : ");
        scanf("%d",&b1);
        int p1,result1;
        p1 = e1*b1/100;
        result1 = e1 + p1;

       printf("\nEnter salary of Employee 2 : ");
        scanf("%d",&e2);
        printf("Enter percentage of bonus of employee 2 : ");
        scanf("%d",&b2);
          int p2,result2;
          p2 = e2* b2/100;
         result2 = e2 + p2;

           printf("\nEnter salary of Employee 3 : ");
        scanf("%d",&e3);
        printf("Enter percentage of bonus of employee 3 : ");
        scanf("%d",&b3);
            int p3,result3;
        p3 = e3*b3/100;
        result3 = e3 + p3;

           printf("\nEnter salary of Employee 4 : ");
        scanf("%d",&e4);
        printf("Enter percentage of bonus of employee 4 : ");
        scanf("%d",&b4);
         int p4,result4;
        p4 = e4*b4/100;
        result4 = e4 + p4;

           printf("\nEnter salary of Employee 5 : ");
        scanf("%d",&e5);
        printf("Enter percentage of bonus of employee 5 : ");
        scanf("%d",&b5);
         int p5,result5;
        p5 = e5*b5/100;
        result5 = e5 + p5;

      printf("\nEmployee of the month(Enter number of employee) = ");
      scanf("%d",&m);
      if (m = 1);
      switch(m)
      {
          case 1 :
          printf("\nPayment to Employee 1 (%d + %d + 2000) = %d\n",e1,p1,result1+2000);
         printf("Payment to Employee 2 (%d + %d) = %d\n",e2,p2,result2);
         printf("Payment to Employee 3 (%d + %d) = %d\n",e3,p3,result3);
         printf("Payment to Employee 4 (%d + %d) = %d\n",e4,p4,result4);
        printf("Payment to Employee 5 (%d + %d) = %d\n",e5,p5,result5);
        break;
          case 2:
            printf("\nPayment to Employee 1 (%d + %d ) = %d\n",e1,p1,m,result1);
printf("Payment to Employee 2 (%d + %d + 2000) = %d\n",e2,p2,result2+2000);
printf("Payment to Employee 3 (%d + %d) = %d\n",e3,p3,result3);
printf("Payment to Employee 4 (%d + %d) = %d\n",e4,p4,result4);
printf("Payment to Employee 5 (%d + %d) = %d\n",e5,p5,result5);
             break;
          case 3:

            printf("\nPayment to Employee 1 (%d + %d ) = %d\n",e1,p1,result1);
printf("Payment to Employee 2 (%d + %d) = %d\n",e2,p2,result2);
printf("Payment to Employee 3 (%d + %d +2000) = %d\n",e3,p3,result3+2000);
printf("Payment to Employee 4 (%d + %d ) = %d\n",e4,p4,result4);
printf("Payment to Employee 5 (%d + %d) = %d\n",e5,p5,result5);
              break;

          case 4:

            printf("\nPayment to Employee 1 (%d + %d + 2000) = %d\n",e1,p1,m,result1+2000);
printf("Payment to Employee 2 (%d + %d) = %d\n",e2,p2,result2);
printf("Payment to Employee 3 (%d + %d) = %d\n",e3,p3,result3);
printf("Payment to Employee 4 (%d + %d + 2000) = %d\n",e4,p4,result4+2000);
printf("Payment to Employee 5 (%d + %d ) = %d\n",e5,p5,result5);
             break;
          case 5:
            printf("\nPayment to Employee 1 (%d + %d + 2000) = %d\n",e1,p1,m,result1+2000);
printf("Payment to Employee 2 (%d + %d) = %d\n",e2,p2,result2);
printf("Payment to Employee 3 (%d + %d) = %d\n",e3,p3,result3);
printf("Payment to Employee 4 (%d + %d) = %d\n",e4,p4,result4);
printf("Payment to Employee 5 (%d + %d + 2000) = %d\n",e5,p5,result5+2000);

          default:
            printf("Wrong input");

            }
            int t ;
            t = result1+ result2+result3+result4+result5;
printf("Total salary to pay  %d = ",t);
break;
          default:
            printf("Wrong input");
    }




}
