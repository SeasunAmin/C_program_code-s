#include<conio.h>
#include<stdio.h>
char ch;
int num;
int date,month,year;
int option ,total,total1=0, total2=0, total3=0, total4=0, total5=0;
float time;
void car ()
{
  FILE * file;
                   file =fopen("carimage. txt","r");
                   if (file== NULL)
                   {
                       printf("FILE IS EMPTY....!!!");

                   }
                else
                {
                   while(!feof(file))
                         {
                             ch = fgetc(file);
                             printf("%c",ch);
                         }

                    fclose(file);
                }
}
void menu ()
{
    FILE * file;
                   file =fopen("park menu. txt","r");
                   if (file== NULL)
                   {
                       printf("FILE IS EMPTY....!!!");

                   }
                else
                {
                   while(!feof(file))
                         {
                             ch = fgetc(file);
                             printf("%c",ch);
                         }

                    fclose(file);
                }
}
void show ()
        {
                   FILE * details;
                   details =fopen("park details. txt","r");
                   if (details== NULL)
                   {
                       printf("FILE IS EMPTY....!!!");

                   }
                else
                {
                   while(!feof(details))
                         {
                             ch = fgetc(details);
                             printf("%c",ch);
                         }

                    fclose(details);
                }
        }
int main()
{
    system("cls");
    system("color 0A");
    FILE *data;

            data = fopen("park details. txt","a");

                                   printf("\n ENTER TODAYS DATE FOR CONTINUE ");

                                   printf("\n\tENTER DAY : " );
                                   scanf("%d",&date);

                                   printf("\n\tENTER MONTH : ");
                                   scanf("%d",&month);

                                   printf("\n\tENTER YEAR : ");
                                   scanf("%d",&year);

                                   fprintf(data,"\nDATE:%d/%d/%d",date,month,year);
                                    system("cls");

    while(1)
                {
                    car();
                    menu();
                    printf("Enter Vehical Type : ");
                    scanf("%d",&option);
                    FILE *data;
                    data = fopen("park details. txt","a");
    switch(option)
          {
                      case 1:
                                    printf("\n\t ENTER TIME : ");
                                    scanf("%f",&time);

                                    printf("\n\t ENTER REGISTRATION NO : ");
                                    scanf("%d",&num);
                                    total1+=100;
                                    fprintf(data,"\n\t\tBUSS    \t%.2f       \t%d    \t100",time,num);
                                    printf("\t SUCCESSFULLY ADDED...!!!");
                                    getch();
                                    system("cls");

                                    break;

                                case 2:
                                    printf("\n\t ENTER TIME : ");
                                    scanf("%f",&time);
                                    printf("\n\tENTER REGISTRATION NO : ");
                                    scanf("%d",&num);
                                    total2+=80;
                                    fprintf(data,"\n\t\tTRUCK    \t%.2f    \t%d    \t80",time,num);
                                    printf("\tSUCCESSFULLY ADDED...!!!");
                                    getch();
                                    system("cls");

                                    break;

                                case 3:
                                    printf("\n\t ENTER TIME : ");
                                    scanf("%f",&time);
                                    printf("\n\tENTER REGISTRATION NO : ");
                                    scanf("%d",&num);
                                    total3+=70;
                                    fprintf(data,"\n\t\tPRIVAT CAR    \t%.2f    \t%d    \t70",time,num);
                                    printf("\tSUCCESSFULLY ADDED...!!!");
                                    getch();
                                    system("cls");

                                    break;

                                case 4:
                                    printf("\n\t ENTER TIME : ");
                                    scanf("%f",&time);
                                    printf("\n\tENTER REGISTRATION NO : ");
                                    scanf("%d",&num);
                                    total4+=60;
                                    fprintf(data,"\n\t\tMOTOR CYCLE    \t%.2f    \t%d    \t60",time,num);
                                    printf("\tSUCCESSFULLY ADDED...!!!");
                                    getch();
                                    system("cls");
                                    break;

                                case 5:
                                    printf("\n\t ENTER TIME : ");
                                    scanf("%f",&time);
                                    printf("\n\tENTER REGISTRATION NO : ");
                                    scanf("%d",&num);
                                    total5+=40;
                                    fprintf(data,"\n\t\tBY CYCLE    \t%.2f    \t%d    \t40",time,num);
                                    printf("\tSUCCESSFULLY ADDED...!!!");
                                    getch();
                                    system("cls");
                                    break;

                                case 6 :
                                         system("cls");
                                         show();
                                         printf("\n\n\n\t\t\t\PRESS ANY KEY TO BACK MAIN MENU....");
                                         getch();
                                         system("cls");
                                         break;
                                case 7 :
                                    exit(0);
                                    fprintf(data,"...................................................................................................................................\n");

                                    break;

                                default :
                                    printf("Invalid.....!!!");
                                    getch();
                                    printf("\n\n\n\t\t\t\PRESS ANY KEY TO BACK MAIN MENU....");
                                    system("cls");

                                    break;


                    }
                       total = total1+total2+total3+total4+total5;
                       fprintf(data,"\t\t Total = %d",total);
                    fclose(data);


                }

getch();
 return 0;
}
