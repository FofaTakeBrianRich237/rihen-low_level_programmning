void _puts_recursion(char *s)
{
 if(s != NULL)
 {
   int i;
   for(i = 0; s[i]; i++)
   {
     _putchar(s[i]);
   }
   _putchar('\n');
 }
}
