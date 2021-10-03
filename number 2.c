//area = 3.1416 * radius*radius
#include<stdio.h>
#include<math.h>
int main()
{
   float radius, area;
   printf("Enter radius :  ");
   scanf("%f",&radius);
   area = M_PI * radius * radius;
   printf("The area of circle is = %.2f",area);




}

