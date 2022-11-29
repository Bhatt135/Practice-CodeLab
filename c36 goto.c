#include<stdio.h>
int main()
{
	int a;

	start:
		printf("enter a num & enter 0 to end \n");
		scanf("%d",&a);
		printf("%d \n",a);

	if(a==888)
			goto end;
	goto start;
	end: 
	return 0;

}