#include<stdio.h>

struct person
{
    char name[20];
    int id;
    float salary;
    float increment ;
    float result ;

};
int main()
{
    struct person person[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nEnter information for person %d",i+1);
        printf("\nEnter name : ",i+1);
        fflush(stdin);
    gets(person[i].name);
    printf("\nEnter id no : ");
    scanf("%d",&person[i].id);
    printf("\nEnter the amount of salary : ");
    scanf("%f",&person[i].salary);
    system("cls");
    if(person[i].salary<10000)
      {
          person[i].increment = person[i].salary*10/100;
           person[i].result =person[i].increment + person[i].salary;
      }
      else if (person[i].salary<20000)
              {
               person[i].increment = person[i].salary*12/100;
               person[i].result =person[i].increment + person[i].salary;
            }

     else if (person[i].salary<30000)
            {
               person[i].increment = person[i].salary*15/100;
               person[i].result =person[i].increment + person[i].salary;
            }

    else if (person[i].salary>=30000)
              {
             person[i].increment = person[i].salary*20/100;
             person[i].result =person[i].increment + person[i].salary;
             }

      }


   for(i=0;i<10;i++)
    printf("\n\n Name              ID            Salary after increment \n %s              %d                  %.2f ",person[i].name, person[i].id,person[i].result);

  getch();

}

