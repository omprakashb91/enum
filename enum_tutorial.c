/*
Date: 06 July 2022
Aim: To demonstrate enum
Author: Omprakash
*/
#include<stdio.h>
int main()
{
enum planets {MERCURY=1, VENUS, EARTH, MARS,JUPITER, SATURN, URANUS, NEPTUE, PLUTO};
enum planets firstplanet = MERCURY;
enum planets secondplanet = VENUS;
printf("firstplanet: %d\n secondplanet: %d",firstplanet,secondplanet);
return 0;
}
