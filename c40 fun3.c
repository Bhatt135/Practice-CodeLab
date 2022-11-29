/*This is an example of function without
  argument and with return value */

#include <stdio.h>

int takenum();
int main()
{
    int c;
    c = takenum();
    printf("the number entered is %d", c);
    return 0;
}

int takenum()
{
    int i;
    printf("enter a num :");
    scanf("%d", &i);
    return i;
}