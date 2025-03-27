#include <stdio.h>

char * _memset(char *s,char b,unsigned int n)
{
  if(s != NULL)
  {
    unsigned int i;
    for(i = 0; i < n; i++)
    {
       s[i] = b;
    }
    return s;
  }
  else return NULL;
}
