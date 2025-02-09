#include<stdio.h>
#include "main.h"

void times_table()
{
  int c = 0, n = 9;
  for(int x = 0; x <= n; x++)
  {
    for(int y = 0; y<=n; y++)
    {
      c = y*x;
      if(y != n)printf("%d, ",c);
      else printf("%d\n",c);
    }
  }
}

