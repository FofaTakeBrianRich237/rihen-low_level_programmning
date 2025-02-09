#include<stdio.h>
#include "main.h"

void pirnt_to_98(int n)
{
 while(n < 99)
 {
  if(n < 98) printf("%d, ",n);
  else printf("%d");
  n++;
 }
}
