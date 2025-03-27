#include "main.h"

void reverse_array(int *a,int n)
{
  int i = 0;
  int  tmep;
  int c = 0;
  c = n - 1;
  for(; i < (n/2); i++)
  { 
    tmep = a[i];
    a[i] = a[c];
    a[c] = tmep;
    c--;
  }
}
