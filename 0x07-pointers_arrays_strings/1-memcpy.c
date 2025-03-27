#include <stdio.h>

char * _memcpy(char * dest, char * src,unsigned int n)
{
  if(dest != NULL && src != NULL)
  {
     unsigned int i;
     for(i=0; i < n; i++) dest[i] = src[i];
     return dest;
  }
  else return NULL;
}
