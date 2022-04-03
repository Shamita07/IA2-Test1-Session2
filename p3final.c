#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  int i;
if (n==0 || n==1)
  return 2;
else 
{
{
  for(i=2;i<=n/2;i++)
    { 
      if(n%i==0)
      { 
        return 0;
      }
    }
}
return 0;
}

void output(int n,int composite)
{
  if (composite==0)
  printf("the number %d is prime",n);
  else if(composite==1)
  printf("the number %d is composite",n);
  else 
  printf("0 and 1 are neither prime nor composite");
}

int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
