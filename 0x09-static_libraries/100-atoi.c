#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
    int Num[100];
    int nNum = 0;
    int count = 0;
    int sign = 0;
    int i = 0, j = 0;
    int number = 0;
    for(j = 0; s[j] != '\0'; j++)  
    {
       if((s[j] >= '0') && (s[j] <= '9')) 
       {
          if(count == 0) 
          {
            count++;
            if(s[j - 1] == '-')  sign = 1;
          }
          Num[nNum++] = s[j];
       }
    }
    for(i = 0; i < nNum; i++) Num[i] -= 48;
    for(i = 0; i < (nNum - 1); i++) for(j = i; j < (nNum - 1); j++) Num[i] *= 10;
    for(i = 0; i < nNum; i++) number += Num[i];
    if(sign == 1) number *= -1;
    return number;
}
