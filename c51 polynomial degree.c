#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	    scanf("%d",&b);
	    for(int j=0;j<b;j++)
	    {
	        scanf("%d",&c);
	        if(c!=0)
	        {
	            d=j;
	        }
	    }
	    printf("%d\n",d);
	}
	return 0;
}