int _strlen_recursion(char *s)
{
  int i;
  for (i = 0; s[i]; i++);
  return i;
}
