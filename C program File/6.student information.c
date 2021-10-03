#include<stdio.h>
int main()
{
    system("color 0b");
    char name[20];
    int age,phn;
    int i ,num;

      FILE *file;
      file = fopen("student data. txt","a");

      if(file == NULL)
      {
          printf("\n\n\t\tFile dose not exist.....");
      }
    else
      {

        printf("\n\t\t\t....................WELCOME...................\n");
        printf("\t\tHOW MANEY STUDENT INFORMATION DO YOU WANT TO COLLECT...?");
        printf("\n\n\t\tEnter your choice : ");
        scanf("%d",&num);

            while(i < num)
                {
                printf("\n\tEnter student name : ");
                scanf("%s",&name);
                printf("\n\tEnter student age : ");
                scanf("%d",&age);
                printf("\n\tEnter phone number : ");
                scanf("%d",&phn);

                fprintf(file,"\n %d.%s   \t\t%d    \t\t %d",i+1,name,age,phn);
                i++;
                }
                printf("\n\tsuccessfully added your data..!!");
                fclose(file);
                getch();
       }


}
