#include <stdio.h>
int main()
{
	int marks[5][4] = {{5,10,15,20},{4,8,12,16},{3, 6, 9, 12}, {2, 4, 6, 8}};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", marks[i][j]);
		}
		printf("\n");
	}
	return 0;
}
