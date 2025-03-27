#include "main.h"

char * _strncpy(char *dest,char *src,int n)
{
   int sourceLen = 0;
   int i = 0;
   int last = 0;
   for(; src[sourceLen] != '\0'; sourceLen++);
   if(n > sourceLen) last = sourceLen;
   else last = n;
   for(; i < last; i++) dest[i] = src[i];
   if(n >= sourceLen) dest[i] = '\0';
   return dest;
}
