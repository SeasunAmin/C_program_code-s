#include<stdio.h>
int main()
{

       int a,i;
      char ch;
      float area, pi=3.14,r;
     float base,hight,area2;
     float w,l,area3;

      do
      {
           printf("\n\nArea Calculator\n");
    printf("1.cricle\n");
    printf("2.triangle\n");
    printf("3.rectangle\n");
    printf("Enter your choice : ");
    scanf("%d",&a);

     switch(a)
       {
         case 1:

             printf("\nEnter the radius = ");
             scanf("%f",&r);
             area = pi*r*r;
             printf("The area of the cricle = %.2f",area);
             printf("\n\nDo you want to calculate again?(press y or n) =");
             scanf("%ch",&ch);

             break;

         case 2:

            printf(" Ennter Base = ");
            scanf("%f",&base);
            printf("\nEnter Hight= ");
            scanf ("%f",&hight);
            area2 = 0.5 *(base*hight);
            printf("\nThe area of triangle is %.2f\n",area2);
            printf("\n\nDo you want to calculate again?(press y or n) =");
            scanf("%ch",&ch);

            break;
         case 3:
            printf("Enter the Wide = ");
            scanf("%f",&w);
            printf("\nEnter Lenth = ");
            scanf("%f",&l);
            area3 = w*l;

            printf("\nThe area of the rectangle is = %.2f",area3);
            printf("\n\nDo you want to calculate again?(press y or n) =");
            scanf("%ch",&ch);

            break;
         default:
            printf("wrong input\n");

       }


      }

          while (ch=='y');
            printf("Thank you");


}
