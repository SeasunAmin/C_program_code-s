#include<stdio.h>
int main()
{
    system("color 0b");
    char name[20];

      FILE *file;
      file = fopen("test 3. txt","a");

      if(file == NULL)
      {
          printf("\n\n\t\tFile dose not exist.....");
      }
    else
    {
        printf("File is opend\n");
        printf("Enter your name : ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is witten successfuly...!!");
        fclose(file);
    }

    getch();
}
