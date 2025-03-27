#include "main.h"

char *leet(char *s)
{
  char toBeChecked[5] = {'a','e','o','t','l'};
  char toBeReplaced[5] = {'4','3','0','7','1'};
  int i = 0, j = 0;
  for(; s[i] != '\0'; i++) for(j = 0; j < 5; j++) if((s[i] == toBeChecked[j]) || (s[i] == (toBeChecked[j] - ('a' - 'A')))) s[i] = toBeReplaced[j];
  return s;
}
