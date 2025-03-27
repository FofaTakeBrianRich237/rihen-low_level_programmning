#include <stdio.h>

void print_diagsums(int *a,int size)
{
  if(a != NULL)
  {
    
    int jump = size  + 1;
    long int sum1 = 0;
    long int  sum2 = 0;
    int i,j,temp;
    int i_1,i_2;

   for(i = 0; i < (size * size); i+=jump) sum1 += a[i];
   for(i = 0, j = i + (size - 1); i <= ((size * size) - size); i = j + 1,j = i+(size -1))
   {
     for(i_1 = i,i_2 = j; i_1 < (i + (size/2)); i_1++,i_2--) 
     {
       temp = a[i_1];
       a[i_1] = a[i_2];
       a[i_2] = temp;
     }
   }
   for(i = 0; i<(size * size); i+=jump) sum2 += a[i];


   printf("%ld, %ld\n",sum1,sum2);
   
  }
}
