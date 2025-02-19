#include "main.h"

char * _strcpy(char *dest,char *src)
{
   int sourceLen = 0;
   int i = 0;
   for(; src[sourceLen] != '\0'; sourceLen++);
   for(; i <= sourceLen; i++) dest[i] = src[i];
   return dest;
}
