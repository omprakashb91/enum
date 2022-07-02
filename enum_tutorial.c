/*
Date: 02 July 2022
Aim: To demonstrate 'enum' with Month name
Author: Omprakash
*/
#include<stdio.h>
int main()
{
    enum month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    enum month firstmon=JAN;
    enum month lastmon =DEC;
    printf("1st month number = %d\n",firstmon);
    printf("12th month number = %d\n",lastmon);
return 0;
}
