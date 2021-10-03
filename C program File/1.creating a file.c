#include<stdio.h>
int main()
{
    system("color 0b");
      FILE *file;
      file = fopen("test 1. txt","w");

      if(file == NULL)
      {
          printf("File dose not exist.....");
      }
    else
    {
        printf("File is opend");
        fclose(file);
    }

    getch();
}
