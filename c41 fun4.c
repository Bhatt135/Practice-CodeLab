/*This is an example of function without
  argument and without return value */

#include <stdio.h>

int mult();
int main()
{
  int c;
  c = mult();
  return 0;
}

int mult()
{
  int i,j;	
  printf("enter two numbers :"),
  scanf("%d %d", &i, &j);
  printf("the multiplication is %d", i * j);
}