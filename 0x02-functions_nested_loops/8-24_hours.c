#include <stdio.h>
#include "main.h"

enum bool{
 false = 0,
 true
};
void jack_bauer()
{
  int a = 0 , b = 0;
  enum bool g =  true;
  while (g == true)
  {

   if(b == 60)
   {
    if(a < 23 )a++;
    else
    {  
      a = 0;
      g = false;
    }
    b = 0; 
   }

   if(a < 10 && b < 10) printf("0%d : 0%d\n",a,b);
   else if(a < 10)  printf("0%d : %d\n",a,b);
   else if (b < 10) printf("%d : 0%d\n",a,b);
   else printf("%d : %d\n",a,b);
   
   b++;
  }
}
