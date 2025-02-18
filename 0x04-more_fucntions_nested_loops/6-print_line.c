#include "main.h"
#include <stdio.h>

void print_line(int n)
{
  if(n != 0)
  {
    int i = 0;
    for(; i < n; i++)
    {
      putchar(95);
    }
  }
  putchar('\n');
}
