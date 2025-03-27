#include <stdio.h>

enum bool
{
  false,
  true
};

int _atoi(char *s)
{
    int Num[100];
    int nNum = 0;
    int count = 0;
    int sign = 0;
    int i = 0, j = 0;
    int number = 0;
    for(j = 0; s[j]; j++)  
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
int main(int argc,char ** argv)
{
  if(argc == 1) printf("0\n");
  else 
  {
     int value[100] = {0};
     int i,pos,val = 0;
     
     for(i=1,pos=0; i < argc;i++,pos++) value[pos] = _atoi(argv[i]);
     for(i=0;i < pos;i++) val += value[i];
     printf("%d\n",val);
  }
  return 0;
}
