/*
Date: 25 july 2022
Aim: to demonstrate enum with english alphabet
Author: Omprakash
*/
#include<stdio.h>
int main()
{
   enum alphabet {A=1, B, C, D, E, F};
   enum alphabet Firstconsonant = B;
   enum alphabet Firstvowel= A;
   printf("value of first consonant = %d\n",Firstconsonant );
   printf("value of first vowel = %d",Firstvowel );
return 0;
}
