#include <stdio.h>
int main()
{
	int a;
	printf("enter your age :");
	scanf("%d", &a);
	switch (a)
	{
	case 17:
		printf("your can not vote");

		break;

	case 18:
		printf("your can vote");

		break;

	default:
		printf("value is wrong");

		return 0;
	}
}
