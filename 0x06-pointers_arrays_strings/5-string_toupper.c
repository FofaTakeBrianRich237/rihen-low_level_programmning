#include "main.h"

char *string_toupper(char *s)
{
  int i  = 0;
  for(; s[i] != '\0'; i++) if((s[i] >= 'a') && (s[i] <= 'z')) s[i] -= ('a' - 'A');
  return s;
}
