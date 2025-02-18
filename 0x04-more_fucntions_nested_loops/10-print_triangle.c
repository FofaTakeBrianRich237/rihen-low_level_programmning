#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{
  int i = 0;
  int space = size;
  int numDisplay = 1;
  
  for(; i < size; i++)
  {
    int j = 0,c = 0;
    for(; j < space; j++) putchar(32);
    for(; c < numDisplay; c++) putchar(35);
    putchar('\n');
    numDisplay++;
    space--;
  }
}
