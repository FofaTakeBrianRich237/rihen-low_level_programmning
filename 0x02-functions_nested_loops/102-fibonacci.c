#include<stdio.h>

int main()
{
 long int a = 0, b = 1 , c = 0;
 int d = 1;
 while(d < 51)
 {
  c = a + b;
  a = b;
  b = c;
  if(d < 50) printf("%ld, ",c);
  else printf("%ld\n",c);
  d++;
 }

 return 0;
}
