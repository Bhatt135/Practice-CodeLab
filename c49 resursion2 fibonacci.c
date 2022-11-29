#include<stdio.h>
int fibonacci(int);
int main()
{
    int num, i, a;
    printf("Enter the number :");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        a = fibonacci(i);
        printf("%d  ", a);
    }
}
int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
}