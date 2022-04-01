#include <stdio.h>

int input_side()
{
  int a;
  printf("enter the side:\n");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a,int b,int c)
{
  int s;
  if(a!=b && b!=c && c!=a)
  s=1;
  else
  s=0;
  return s;
}

void output(int a, int b, int c, int s)
{
  if (s=1)
  printf("triangle with sides %d,%d,%d is scalene",a,b,c);
  else
  printf("triangle is not scalene");
}

int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}
