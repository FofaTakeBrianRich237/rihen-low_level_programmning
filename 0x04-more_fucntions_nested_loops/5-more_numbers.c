#include "main.h"
#include <stdio.h>

enum bool
{
  false = 0,
  true
};
void more_numbers()
{
  int i = 0;
  
  for(; i < 14; i++)
  {
    int a = 48;
    int b = 48;
    enum bool isAtNine = false;
    enum bool shouldIncriment = true;  

   while(1)
   {
    putchar(a);
    if((a == 49) && (shouldIncriment == false)) isAtNine = true;
    if(isAtNine == true)
    {
        putchar(b);
        b++;
        if(b == 53) break;
    }
    
    if(shouldIncriment == true)
    {
        if(a < 57) a++;
        else 
        {
           a = 49;
           shouldIncriment = false;
        }
    }
  }
   putchar('\n');
  }
 
}

