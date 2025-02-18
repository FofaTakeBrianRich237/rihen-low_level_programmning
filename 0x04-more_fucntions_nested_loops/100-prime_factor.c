#include <stdio.h>
enum bool
{
  false = 0,
  true
};
int main()
{
  long int primeFac = 0;
  long int i = 2;
  long int val = 612852475143;
  for(; i < val+1; i++) 
  {
    if(val % i == 0)
    {
    enum bool isPrime = true;
    int j = 2;
    for(; j < i; j++) 
    {
      if(i % j == 0)
      {
        isPrime = false;
        break;
     }
    }
    if(isPrime == true) 
    { 
       primeFac = i;
    }

    } 
  }
  printf("The lagerst prime factor of %ld is %ld",val,primeFac);
  return 0;
}
