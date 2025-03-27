#include <stdio.h>

int main(int argc,char ** argv)
{
  if(argc != 3) printf("Error\n");
  else
  {
    int i = 0,j = 1;
    int temp = 0,count = 0;
    int value[2];
    int pos = 0;
    for(j = 1; j < argc; j++)
    {
      for(i = 0,temp = 0,count = 0; argv[j][i]; i++)
      {  
         temp  = ((int)argv[j][i]) - 48;
         if(count == 0) 
         {
            value[pos] = temp;
            count = 1;
         }
         else 
         { 
             value[pos] *= 10;
             value[pos] += temp;
         }
      }
      pos++;
    }
    printf("%d\n",value[0] * value[1]);
  }
  return 0;
}
