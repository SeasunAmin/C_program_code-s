        #include<stdio.h>
        #include<conio.h>
        char ch;
        int option, total,total1=0, total2=0, total3=0, total4=0, total5=0;
        float time;
        int date,month,year;
        int num,i;
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


         void car ()
        {
                   FILE * file;
                   file =fopen("test 1. txt","r");
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
   int main ()
        {
            system("color 0A");
            car();

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

                                while(1)
                                {
                                  system("cls");

                                  car();

                                   menu();


                                   printf("\t SECLECT YOUR OPTION : ");
                                   scanf("%d",&option);
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
                                    break;





                                  }
                       total = total1+total2+total3+total4+total5;
                       fprintf(data,"\t\t Total = %d",total);

                        fclose(data);
                       }


            getch();
        }
