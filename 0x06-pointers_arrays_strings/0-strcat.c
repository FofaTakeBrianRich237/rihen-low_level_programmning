#include "main.h"

char * _strcat(char *dest,char * src)
{
   int lenDest = 0;
   int lenSrc = 0;
   int i = 0;
   for(; dest[lenDest] != '\0'; lenDest++);
   for(; src[lenSrc] != '\0'; lenSrc++);
   for( ;i <= lenSrc; ) dest[lenDest++] = src[i++];
   return dest;
}
