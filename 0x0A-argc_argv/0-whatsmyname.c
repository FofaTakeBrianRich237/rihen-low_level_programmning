#include <stdio.h>

int main(int argc,char ** argv)
{
   printf("%s\n",argv[0]);
   argc -= 4;
   return 0;
}
