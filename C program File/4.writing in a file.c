#include<stdio.h>
int main()
{
    system("color 0b");
    char name[20];
    int age;


      FILE *file;
      file = fopen("test 4. txt","a");

      if(file == NULL)
      {
          printf("\n\n\t\tFile dose not exist.....");
      }
    else
    {
        printf("File is opend\n");

        printf("\nEnter your name : ");
       gets(name);
        printf("\nEnter your age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s    Age = %d",name,age);
        fputs("\n",file);
        printf("File is witten successfuly...!!");
        fclose(file);
        }


    getch();
}
