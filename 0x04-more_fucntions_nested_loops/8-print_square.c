#include "main.h"
#include <stdio.h>

void print_square(int size)
{
  int i = 0;
  for(; i < size; i ++)
  {
    int j = 0;
    for(; j < size; j++)
    {
      putchar(35);
    }
    putchar('\n');
  }
}
