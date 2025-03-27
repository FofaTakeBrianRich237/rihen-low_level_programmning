#include <stdio.h>

void _print_rev_recursion(char *s)
{
  if(s != NULL)
  {
    int i;
    for(i = 0; s[i]; i++);
    for( i -= 1; i > -1; i--)
    {
      _putchar(s[i]);
    }
    _putchar('\n');
  }
} 
