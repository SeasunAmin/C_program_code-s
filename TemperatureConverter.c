#include<stdio.h>
int main()
{
    int choice;
    float team,converter;
    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit  to Celsius\n");
    printf("2.Celsius to farhernheit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
      {
        case 1:
           {
               printf("Enter the Fahrenheit temperature:  ");
               scanf("%f",&team);
               converter = (team -32)/1.8;
               printf("The temperature in Celsius is : %f \n",converter);
                 break;
           }


      case 2 :

          {
            printf("Enter the Celsius temperature: ");
            scanf("%f",&team);
            converter = (1.8*team)+32;
            printf("The Fahrenheit temperature is: %f\n",converter);
break;
          }
default :
printf("404 error");


      }



}









