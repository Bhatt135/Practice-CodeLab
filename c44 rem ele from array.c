#include <stdio.h>
int main()
{
    int a[5] = {5, 7, 9, 116, 25}, i, in, y, x, z = 4;
    
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", a[i]);
    }
again:
rp:
    printf("what do you want to remove?\n");
    scanf("%d", &x);

    if (x == 5 || x == 7 || x == 9 || x == 116 || x == 25)
    {
        for (i = 0; i < 5; i++)
        {
            if (a[i] == x)
            {
                in = i;
                //printf("%d\n",in);
            }
        }
        for (i = in; i <= z ; i++)
        {
            a[i] = a[i + 1];
        }
       
        a[z] = 0;
        z = z - 1;
        //printf("*%d\n", z);
      /*  printf("*%d\n", a[z + 1]);*/
        for (i = 0; i < 5; i++)
        {
            printf("%d \n", a[i]);
        }
        printf("do you want to remove more element?\nIf yes press 1 and if no press 2\n");
        scanf("%d", &y);
        if (y == 1)
        {
            if (a[0] == 0)
            {
                printf("you can not remove more element\n");
                goto exit;
            }

            goto rp;
        }
    }
    else
    {
        printf("watch carefully\n");
        goto again;
    }
exit:
    return 0;
}