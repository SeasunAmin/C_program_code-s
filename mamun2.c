#include<stdio.h>
int main()
{
    char string1[20], string2[]="string literal";
    int i;
    printf("enter a string :");
    scanf("%s",string1);
    printf("string is :%s\n string2 is :%s\n string1 with spaces between character is:\n",string1, string2);
    for(i=0;string1[i]!=NULL;i++)
    {
         printf("%c",string1[i]);
         printf("\n");
    }
    return 0;
}
