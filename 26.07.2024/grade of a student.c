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
