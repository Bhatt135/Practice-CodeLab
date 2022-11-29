#include <stdio.h>

int main(void) {
	int t,a[3],b[3],c,d;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    for(int j=0;j<3;j++) {scanf("%d",&a[j]);}
	    for(int j=0;j<3;j++) {scanf("%d",&b[j]);}
        if(a[0]>b[0]){c++;}
        else{d++;}
        if(a[1]>b[1]){c++;}
        else{d++;}
        if(a[2]>b[2]){c++;}
        else{d++;}
	    if(c>d){printf("A\n");}
	    else{printf("B\n");}
	}
	return 0;
}

