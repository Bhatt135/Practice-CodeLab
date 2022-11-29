/*This is an example of function with
  argument and without return value */

#include <stdio.h>
void printstar();
int main()
{
    printstar(9);

    return 0;
}

void printstar(int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}