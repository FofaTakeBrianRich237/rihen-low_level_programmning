#include<stdio.h>

int main()
{
 int a = 48,b = 0;
 while(a < 57)
 {
  b = a + 1;
  while(b < 58)
  {
   putchar(a);
   putchar(b);
   if(a != 56)
   {
    putchar(',');
    putchar(' ');
   } 
   b++;
  }
  a++;
 }
 putchar('\n');
 return 0;
}
