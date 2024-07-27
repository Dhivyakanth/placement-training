//c program to find sum of digits of number
#include<stdio.h>
int main()
{
   int A,B,C,D,E,F;
   printf("\nEnter A:");
   scanf("%d",&A);
   B=A/100;
   C=A%10;
   D=A%100;
   E=D/10;
   F=B+C+E;
   printf("\nThe sum of the digits of the numbers = %d",F);
return 0;
}
