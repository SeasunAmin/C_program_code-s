#include<stdio.h>

int main ()
{
while(1)
{
 int num;
 printf("\nHello miss Alina\n\n");
 printf("What do you want to calculate.?\n");
 printf("Press 1 for payment to the employee\n");
 printf("Press 2 for payment to the vendors\n");
 printf("Press 3 for net profit per month\n");
 scanf("%d",&num);

 int e1,e2,e3,e4,e5,b1,b2,b3,b4,b5,m;
 int v1,v2,v3,c1,c2,c3;
 int s,w,n,x,total;
 int k, pro;
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
 printf("Total salary to pay %d = ",t);
 break;

 case 2:
 printf("Enter payment to the vendor 1 : ");
 scanf("%d",&v1);
 printf("Enter percentage of commission the vendor 1 : ");
 scanf("%d",&c1);

 int a1 , r1;
 a1= v1*c1/100;
 r1 =v1+a1;
 printf("Enter payment to the vendor 2 : ");
 scanf("%d",&v2);
 printf("Enter percentage of commission the vendor 2 : ");
 scanf("%d",&c2);

 int a2 , r2;
 a2= v2*c2/100;
 r2 =v2+a2;
 printf("Enter payment to the vendor 3 : ");

 scanf("%d",&v3);
 printf("Enter percentage of commission the vendor 3 : ");
 scanf("%d",&c3);
 int a3 , r3;
 a3= v3*c3/100;
 r3 =v3+a3;
 printf("\nPayment to vendor 1 : (%d + %d) = %d tk ", v1,a1,r1);
 printf("\nPayment to vendor 2 : (%d + %d) = %d tk",v2,a2,r2);
 printf("\nPayment to vendor 3 : (%d + %d) = %d tk",v3,a3,r3);
 printf("\nTotal amount to pay = %d%d%d tk",r1+r2+r3);
 break;
 case 3:
 printf("\nEnter amount of total salary of the employees = ");
 scanf("%d",&s);
 printf("\nEnter amount of total payment to the vendors = ");
 scanf("%d",&w);
 printf("\nEnter maintenance coast = ");

 scanf("%d",&n);
 printf("\nExtra cost = ");
 scanf("%d",&x);
 total = s+w+n+x;
 printf(" \nYour Total investment of this month = (%d +%d + %d +%d)= %d",s,w,n,x,total);
 printf("\nEnter your total sale of this month = ");
 scanf("%d",&k);

 pro = k-total;
 printf("\nYour net profit this month = (%d - %d) = %d",k,total,pro);
 break;

 default :
 printf("Wrong input\n");
 // getch();
 }
}
}
