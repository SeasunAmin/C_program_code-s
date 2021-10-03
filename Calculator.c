#include<stdio.h>
int main()
{

    double num1,num2;
    char op;
    int id,pass;

     printf("\nEnter your id ");
      scanf("%d",&id);
      id == 200;
     printf("Enter your password ");
     scanf("%d",&pass);
     pass == 123;
    if (id ==200 && pass==123 )
  {
    printf("Enter any operator(+, - , * , / ,) : ");
    scanf("%c",&op);
    printf("Enter two number : ");
    scanf("%lf  %lf",&num1,&num2);
    switch(op)
    {

    case '+' :
     {
         printf("%lf + %lf =%lf\n",num1,num2,num1+num2);
break;
     }

case '-' :
     {
         printf("%lf - %lf =%lf\n",num1,num2,num1-num2);
break;
     }

       case '*' :
     {
         printf("%lf * %lf =%lf\n",num1,num2,num1*num2);
break;
     }

       case '/' :
     {
         printf("%lf / %lf =%lf\n",num1,num2,num1/num2);
break;
     }


  default :
  printf("404 error\n");

    }






}
else
printf("Wrong information");
  }
