#include<stdio.h>
#include "main.h"

enum bool{
 false = 0,
 true
};

void div_ditermine(int div,int& c,int add_num);
int print_last_digit(int c)
{
 int div = 10 , add_num = 10;
 printf("enter the number\n");
 scanf("%d",&c);

 if(c > 9) while(c > 9) div_ditermine(div,c,add_num);
 printf("%d",c);

 return c;
}

void div_ditermine(int div,int& c,int add_num)
{
  int count = 1;
  enum bool g = true;

 while(g)
 {
   if(c/div == 0) g = false;
   else
   {
    div += add_num;
    if(count == 9)
    {
        count = 1;
        add_num = div;
    }
    else count++;
   }
 }
 div -= add_num;
 c -= div;
}
