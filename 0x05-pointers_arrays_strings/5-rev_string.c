#include "main.h"

void rev_string(char *s)
{
  int len = 0;
  int i = 0;
  char tmep;
  int c = 0;
  for(; s[len] != '\0'; len++);
  c = len - 1;
  for(; i < (len/2); i++)
  { 
    tmep = s[i];
    s[i] = s[c];
    s[c] = tmep;
    c--;
  }
}
