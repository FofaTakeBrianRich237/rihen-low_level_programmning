#include <stdio.h>

int is_palindrome(char *s)
{
  if(s != NULL)
  {
    enum bool
    {
      false = 0,
      true 
    };
    int j,i;
    enum bool found = false;
    for(j = 0; s[j]; j++);
    for(i = 0,j -= 1; i < ((j+1)/2); i++,j--)
    {
       if(s[i] != s[j])
       {
         found = true;
         break;
       }
    } 
    if(found == true) return 0;
    else return 1;
  }
  else return 0;
}
