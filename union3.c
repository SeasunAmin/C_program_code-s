#include<stdio.h>
union test1
{
    int x,y;
};

union test2
{
    char ch;
    int x;
};
union test3
{
    char name[20];
    double d;
};
struct test4
{
    int x;
    float y;
    double d;
    //char ch;
};
int main()
{
      union test1 t1;
      union test2 t2;
      union test3 t3;
      struct test4 t4;

    printf("Sizeof  (test 1)  = %d\n",sizeof(t1));
    printf("Sizeof  (test 2)  = %d\n",sizeof(t2));
    printf("Sizeof  (test 3)  = %d\n",sizeof(t3));
     printf("Sizeof  (test 4)  = %d\n",sizeof(t4));



}

