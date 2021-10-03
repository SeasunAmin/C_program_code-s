#include<stdio.h>
int main()
{

    char A[100],ch;
    int i,vowel,consunant,digit,word,others;
    printf("Enter any srtring: ");
    gets(A);
    i=vowel=consunant=digit=word=others = 0;
    while((ch=A[i])!= '\0')
        {
         if  (ch == 'a' || ch =='e' || ch=='i' || ch =='o' || ch=='u' ||ch== 'A' || ch=='E' || ch=='I' ||  ch=='O' || ch=='U')
            vowel++;
        else if ((ch>= 'a' && ch<='z') ||  (ch>= 'A' && ch<='Z'))
        consunant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if (ch== ' ')
            word++;
        else
            others++;

        i++;
      }

    word++;

    printf("Number of Vowle is =%d\n",vowel);
    printf("Number of Consunant is =%d\n",consunant);
    printf("Number of  Digit is =%d\n",digit);
    printf("Number of  Word is =%d\n",word);
    printf("Number of  Others is =%d\n",others);




}
