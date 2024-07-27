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

// c program to find area and perimeter of square
#include<stdio.h>
int main()
{
   int a,area,perimeter;
   printf("\nEnter a:");
   scanf("%d", &a);
   area = a*a;
   perimeter = 4*a;
   printf("Area of Square : %d", are);
   printf("Perimeter of Square : %d", perimeter);
}

//c program to find grade of a student
#include <stdio.h>
#include<string.h>
int main()
{
    char str[5];
    printf("Enter str:");
    scanf("%s",str);
    if(str[0]=='O')
    printf("Description : Outstanding\nGrade points : 10");
    else if(str[0]=='A'&& str[1]=='+')
    printf("Description : Excellent\nGrade points : 9");
    else if(str[0]=='A')
    printf("Description : Very good\nGrade points : 8");
    else if(str[0]=='B'&&str[1]=='+')
    printf("Description : Good\nGrade points : 7");
    else if(str[0]=='B')
    printf("Description : Average\nGrade points : 6");
    else if(str[0]=='C')
    printf("Description : Satisfactory\nGrade points : 5");
    else if(str[0]=='U')
    printf("Description : Re appearence\nGrade points : 0");
    else if(str[0]=='S'&&str[1]=='A')
    printf("Description : Shortage of attendence");
    else if(str[0]=='W'&&str[1]=='D')
    printf("Description : Withdrawal");
    return 0;
}

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
    return 0;
}
