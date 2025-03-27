#include <stdio.h>

char * _strchr(char *s,char c)
{
  if(s != NULL)
  {
     char *temp;
     int i = 0;
     int j = 0;
     for(; s[i]; i++)
     {
       if(s[i] == c)
       {
         temp = &s[i];
         j = 1;
         break;
       }
     }
     if(j == 1) return temp;
     else return NULL;
  }
  else return NULL;
}
