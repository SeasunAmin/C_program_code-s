#include<stdio.h>
int main()
{
    system("color 0b");
    char ch;



      FILE *file;
      file = fopen("student data. txt","r");

      if(file == NULL)
      {
          printf("\n\n\t\tFile dose not exist.....");
      }
    else
    {
        printf("File is opend\n");
             while(!feof(file))
                 {
                     ch = fgetc(file);
                     printf("%c",ch);
                 }

        fclose(file);
        }


    getch();
}
