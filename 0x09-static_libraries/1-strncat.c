#include "main.h"

char * _strncat(char *dest,char * src,int n)
{
   int lenDest = 0;
   int lenSrc = 0;
   int i = 0;
   int last = 0;
   for(; dest[lenDest] != '\0'; lenDest++);
   for(; src[lenSrc] != '\0'; lenSrc++);
   if(n > lenSrc) last = lenSrc;
   else last = n;
   for( ;i < last; ) dest[lenDest++] = src[i++];
   dest[lenDest] = '\0';
   return dest;
}
