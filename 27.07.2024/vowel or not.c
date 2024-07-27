//c program to find vowel or not
#include<stdio.h>
int
main ()
{
  char x,a,A,e,E,i,I,o,O,u,U;
  printf ("enter x:");
  scanf ("%c",&x);
  if ((x =='a')||(x == 'A')||(x == 'e')||(x == 'E'||(x=='i')||(x== 'I')||(x=='o')||(x=='O')||(x=='u')||(x=='U')))
    printf ("The character is vowel");
  else
    printf ("The given is consonants");
  return 0;
}
