#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
  int len = _strlen(s);
  len -= 1;
  for(; len >= 0; len--) putchar(s[len]);
}
