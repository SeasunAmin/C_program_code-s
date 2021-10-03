#include<stdio.h>
int main()
{
      int c;
      int num_line = 0;
      c = getchar();
      while(c!=EOF)
        {
           if(c == '\n')
           {
           ++num_line;

           }

           c == getchar();
        }

}
