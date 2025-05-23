#ifndef __MAIM_H__
#define __MAIN_H__

void _putchar(int n);
char * _memset(char *s,char b,unsigned int n);
char * _memcpy(char * dest, char *src,unsigned int n);
char * _strchr(char *s,char c);
char * _strpbrk(char *s,char *accept);
char * _strstr(char *haystack,char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a,int size);
void set_string(char**s,char * to);

#endif
