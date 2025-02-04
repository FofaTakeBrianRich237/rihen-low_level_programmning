#include<stdio.h>

int main()
{
 int a = 97;
 while (a < 123)
 {
  if(a != 113 && a != 101) putchar(a);
  a++;
 }
 putchar('\n');
 return 0;
}
