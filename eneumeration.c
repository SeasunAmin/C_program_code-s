#include<stdio.h>

enum days_of_week
{
    son,mon,tue,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;
    day1 = fri;
    day2 = wed;
    int dif = wed -fri;
    printf("Day 1 = %d\n",day1);
    printf("Difference = %d\n",dif);
}
