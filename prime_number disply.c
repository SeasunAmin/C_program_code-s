#include <stdio.h>
 int num1, num2, Z, i, n;
void priem()
{

    printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1; i<=num2; ++i)
   {
      Z=0;
      for(n=2; n<=i/2; ++n)
      {
         if(i%n==0)
         {
            Z=1;
            break;
         }
      }
      if(Z==0)
         printf("%d\n",i);
  }
}
int main()
{

    printf("Enter two range(input integer numbers only):");
   scanf("%d %d", &num1, &num2);

   priem();




}
