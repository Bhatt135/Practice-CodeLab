#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter any num : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}