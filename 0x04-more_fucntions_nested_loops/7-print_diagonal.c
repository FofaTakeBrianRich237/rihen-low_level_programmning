#include "main.h"
#include <stdio.h>

void print_diagonal(int n)
{
  int i = 0;
  for(; i < n; i++)
  {
    int j = 0;
    for(; j < i; j++) putchar(32);
    putchar(92);
    putchar('\n');
  } 
}
