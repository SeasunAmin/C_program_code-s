
//area = sqrt (s*(s-a)*(s-b)*(s-c))
//s= (a+b+c)/2

#include <stdio.h>
int main ()
{
float a,b,c,s, area;
printf("Enter three value:   ");
scanf ("%f   %f  %f ",&a ,&b, &c);
s = (a+b+c)/2;
area  = sqrt(s*(s-a)*(s-b)*(s-c));

printf("The area of triangle is : %f\n",area);


}


