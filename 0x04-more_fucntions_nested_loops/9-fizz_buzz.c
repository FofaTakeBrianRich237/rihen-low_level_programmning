#include "stdio.h"

int main()
{
  for(int i = 1; i < 101; i++)
  {
    if((i % 3 == 0) && (i % 5 == 0)) printf("FzzBuzz ");
    else if(i % 3 == 0) printf("Fizz ");
    else if(i % 5 == 0) printf("Buzz ");
    else printf("%d ",i);
  }
  return 0;
}
