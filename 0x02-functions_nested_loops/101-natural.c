#include<stdio.h>

int main()
{
 int a = 3,sum = 0;
 while(a < 1025)
 {
  if((a % 3 == 0) && (a % 5 == 0)) sum += a;
  else if ((a % 3 == 0) || (a % 5 == 0)) sum += a;
  a++;
 }
 printf("the sum of the multiples of 3 and 5 below 1024 is %d\n", sum);
 return 0;
}
