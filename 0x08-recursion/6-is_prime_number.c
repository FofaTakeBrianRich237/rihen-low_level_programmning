int is_prime_number(int n)
{ 
  enum bool
  {
    false = 0,
    true
  };
  if(n == 1 || n == 0 || n < 0) return 0;
  else
  {
    enum bool found = false;
    int i;
    for(i = 2; i < (n/2); i++) 
    {
       if(n%i == 0) 
       {
          found = true;
          break;
       }
    }
    if(found == true) return 0;
    else return 1;
  }
}
