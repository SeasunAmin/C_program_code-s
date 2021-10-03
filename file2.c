#include<stdio.h>
int main ()
{
    FILE *file;
    char name[20] = "Nazrul Amin Seasun";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w");
      if (file == NULL)
      {
          printf("File dosen't exist");
      }
    else
    {
        printf("File is open\n");
        for (i = 0; i<length; i++)
          {
              fputc(name[i],file);
          }
    printf("File is written successfully\n");
    fclose(file);
    }
getchar();

}
