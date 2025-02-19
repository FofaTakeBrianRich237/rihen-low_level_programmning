#include "main.h"
#include <stdio.h>

void puts2(char *s)
{
  int i = 0;
  int j = 0;
  for (; s[i] != '\0'; i++)
  {
    if(j == 0) putchar(s[i]);
    if(j == 0) j = 1;
    else j = 0;
  }
}
