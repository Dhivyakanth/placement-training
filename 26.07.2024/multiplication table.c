//C Program to print the multiplication table of the given number
#include<stdio.h>
int main()
{
    int a,i,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    printf("\n%d*%d=%d",a,i,a*i);
    return 0;
}

