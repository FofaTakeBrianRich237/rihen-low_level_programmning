#include "main.h"
#include <stdio.h>

void puts_half(char *s)
{
  int len = 0;
  int half = 0;
  for(; s[len] != '\0'; len++);
  if(len % 2 == 0) half = len / 2;
  else half = (len - 1)/2;
  for(;s[half] != '\0'; half++) putchar(s[half]);

}
