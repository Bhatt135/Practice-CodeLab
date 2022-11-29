#include <stdio.h>
int main()
{
    int x = -1, y;
    char stack[5];
add:
    x = x + 1;
    printf("Add your char in array :\n");
    for (int i = x; i <= x; i++)
    {
        scanf("%c", &stack[i]);
        printf("Do you want to add more element? \n press 1 for yes and 2 for no \n");
        scanf("%d", &y);
        if (y == 1)
        {
            goto add;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c \n", stack[i]);
    }
}
