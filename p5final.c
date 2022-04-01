#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}

int gcd(int a,int b)
{
  int r,i;
  for(i=1;i<=a && i<=b;i++) 
    {
      if(a%i==0 && b%i==0)
      {
        r=i;
      }
    }
  return r;
}

int output(int a, int b,int gcd)
{ 
  printf("the hcf is %d: \n",gcd);
}

int main()
{
  int a,b,r;
  a=input();
  b=input();
  r=gcd(a,b);
  output(a,b,r);
  return 0;
}

