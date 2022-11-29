/*This is an example of function with
  argument and with return value */

#include <stdio.h>
int sum(int a, int b);
int main()
{
  int a, b, c, d;
  a = 9;
  b = 87;
  c = sum(a, b);
  d = sum(40, 5);
  printf("the sum is %d\n", c);
  printf("the sum is %d", d);
  return 0;
}

int sum(int a, int b)
{
  return a + b;
}