
//C Program to print the reverse of given two integer
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("reversed value of a:%d",a);
    printf("\nreversed value of b:%d",b);
    return 0;
}
