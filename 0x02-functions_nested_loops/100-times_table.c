#include<stdio.h>
#include "main.h"

void print_times_table(int n)
{
  int c = 0;
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

