//c program to find palindrome number
#include <stdio.h>
int main() 
{
    int n,reverse= 0, a , Given;
    printf("Enter n:");
    scanf("%d", &n);
    Given = n;
    for(n=Given;n != 0;n=n/10)
    {
        a = n % 10;
        reverse = reverse * 10 + a;
    }
    printf("Reversed number is %d",reverse);
    if (Given == reverse)
        printf(" \n%d is a palindrome", Given);
    else
        printf("\n%d is not a palindrome", Given);
    return 0;
}
