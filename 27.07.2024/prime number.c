\\C program to find prime numbers 
#include <stdio.h>
int main()
{
int A;
printf("Enter A:");
scanf("%d",&A);
if(A/1==A && A/A==1)
   printf("The given number is prime number");
else
   printf("The given number is not prime number");
return 0;
}
