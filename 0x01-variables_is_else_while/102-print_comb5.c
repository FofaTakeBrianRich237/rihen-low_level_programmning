#include<stdio.h>

int main()
{
 int a = 0,b = 0,c = 48,d = 0;
 while(c < 58)
 {
  d = c;
  while(d < 58)
  {
  a = 48;
  while(a < 58)
  {
   if(a != 57) b = a;
   else b = a - 1;
  while(b < 58)
  {
   if(!(a == c && b == d))
   {
   putchar(c);
   putchar(d);   
   putchar(' ');
   putchar(a);
   putchar(b);
   if(!(a == 57 && b == 57 && c == 57 && d == 56))
   {
    putchar(',');
    putchar(' ');
   } 

   }
   b++;
  }
  a++;
 }

   d++;
  }
  c++;
 }
 putchar('\n');
 return 0;
}
