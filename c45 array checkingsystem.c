#include <stdio.h>
int main()
{
    int a[5] = {2, 4, 9, 116, 25}, x;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", a[i]);
    }
    scanf("%d", &x);
    
    for (int i = 0; i < 5; i++)
    {
        if (x == 2 || x == 9 || x == 4 || x == 116 || x == 25)
        {
            printf("yes");
            break;
        }
        else
        {
            printf("no");
            break;
        }
    }
}