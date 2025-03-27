#include <stdio.h>

char *_strpbrk(char *s,char *accept)
{
  if(s != NULL && accept != NULL)
  {
    int i = 0, j = 0,nearest,found = 0;
    for(; accept[i]; i++)
    {
      for(j = 0; s[j]; j++)
      {
         if(accept[i] == s[j])
         {
           if(found == 0) 
           {
               nearest = j;
               found = 1;
           }
           else if(nearest > j) nearest = j;
           break;
         }
      }
    }
    if(found != 0) return &s[nearest];
    else return NULL;
  }
  else return NULL;
}
