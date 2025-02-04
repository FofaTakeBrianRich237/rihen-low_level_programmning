#include<stdio.h>

int main()
{
 int a = 48,b = 0,c = 0;
 while(a < 56)
 {
  b = a + 1;
  while(b < 57)
  {
   c = b + 1;
   while (c < 58)
   {
    putchar(a);
    putchar(b);
    putchar(c);
    if(a != 55)
    {
     putchar(',');
     putchar(' ');
    }
    c++;
   }
   b++;
  }
  a++;
 }
 putchar('\n');
 return 0;
}
