#include <stdio.h>
int main()
{
	int n, b = 1, c;
	printf("Enter a number :");
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int k = n-1; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				a[i][j] = 1;
				printf("%d ",b);
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}