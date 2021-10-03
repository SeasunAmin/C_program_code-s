#include<stdio.h>
int main()
{
    system("color 0b");
    char name[20]="Nazrul Amin Seasun";
    int i;
    int length = strlen(name);

      FILE *file;
      file = fopen("test 2. txt","w");

      if(file == NULL)
      {
          printf("File dose not exist.....");
      }
    else
    {
        printf("File is opend\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is witten successfuly...!!");
        fclose(file);
    }

    getch();
}
