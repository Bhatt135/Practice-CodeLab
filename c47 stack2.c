#include <stdio.h>
#define size 4
int top = -1, stack[size];
void push();
int main()
{
    while (1)
    {
        int choise;
        printf("\n 1.push \n 2.pop \n 3.peep \n 4.change \n 5.display \n");
        printf("What do you want to do?");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            push();
            break;
        case 2 :
            pop();
            break;
        /*case 3 :
            peep();
            break;
        case 4 :
            change();
            break;
        case 5 :
            display();
            break;*/
        default:
            break;
        }
        for (int i = 0; i <= top ; i++)
        {
            printf(" %d \n",stack[i]);
        }
    }
}
void push()
{
    int x;

    if (top == size - 1)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}
void pop()
{
    int x;

    if (top == size - 1)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        
    }
}