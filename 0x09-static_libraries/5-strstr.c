#include <stdio.h>

char * _strstr(char *haystack,char *needle)
{
  if(haystack != NULL && needle != NULL)
  {
     int i = 0,j = 1,found = 0, position = 0;
     for(; haystack[i]; i++)
     {
        if(haystack[i] == needle[0])
        {
           int found2 = 0,i_2 = i+1;
           position = i;
           for(j = 1; needle[j]; j++,i_2++)
           {
             if(haystack[i_2] != needle[j])
             {
                 found2 = 1;
                 break;
             }
           }
           if(found2 == 0) 
           {
             found = 0;
             break;
           }
           else found = 1;
        }
     }
     if(found == 0) return &haystack[position];
     else return NULL;
  }
  else return NULL;
}

