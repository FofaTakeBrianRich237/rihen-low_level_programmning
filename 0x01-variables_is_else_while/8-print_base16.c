#include<stdio.h>

int main()
{
 int a = 48;
 while (a < 103)
 {
  putchar(a);
  if(a == 57) a = 97;
  else a++;
 }
 putchar('\n');
 return 0;
}
