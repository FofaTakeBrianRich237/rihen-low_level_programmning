#include<stdio.h>

int main()
{
 int a = 48;
 while (a < 58)
 {
  putchar(a);
  if(a != 57)
  {
   putchar(',');
   putchar(' ');
  }
  a++;
 }
 putchar('\n');
 return 0;
}
