#include "main.h"

int _pow_recursion(int x,int y)
{
  if(y > 1)
  {
    int j = x, i = 0;
    for(; i < (y-1); i++) j = j * x;
    return j;
  }
  else if(y==1) return x;
  else if(y==0) return 1;
  else return -1;
}
