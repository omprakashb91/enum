/*
Date: 11 July 2022
Aim: To demonstrate enum using ON and OFF switch
Author: Omprakash
*/
#include<stdio.h>
int main()
{
    enum by {ZERO,ONE};
    enum by OFF=ZERO;
    enum by ON=ONE;
    printf("digital value of ON is = %d\n",ON);
    printf("digital value of OFF is = %d\n",OFF);
    return 0;
}
