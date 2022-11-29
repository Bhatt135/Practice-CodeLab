#include <stdio.h>
int factorial(int);
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d", &a);
    a = factorial(a);
    printf("factorial is %d", a);
}
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}