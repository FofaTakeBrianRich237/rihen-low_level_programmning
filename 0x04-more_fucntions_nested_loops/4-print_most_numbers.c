#include "main.h"
#include <stdio.h>

void print_most_numbers()
{
  int a = 48;
  while (a < 58) 
  {
     if((a != 50) && (a != 52))putchar(a);
     a++;
   }
  putchar('\n');
}
