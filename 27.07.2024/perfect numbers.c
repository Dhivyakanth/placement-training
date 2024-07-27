//c program to find perfect numbers 
#include<stdio.h>
int main()
{
   int i,A,sum=0;
   printf("\nEnter A:");
   scanf("%d",&A);
   for(i=1;i<=(A-1);i++)
   {
       if((A%i)==0)
       sum=sum+i;
   }
   printf("\nsum of divisors are %d",sum);
   if (sum == A)
        printf("\n%d is perfect number",A);
    else
        printf("\n%d is not a perfect number",A);
   return 0;
}
