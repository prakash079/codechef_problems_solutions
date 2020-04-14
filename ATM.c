#include <stdio.h>

int main(void) {
	int w;
	float a,b;
	scanf("%d",&w);
	scanf("%f",&b);
	a=w+0.50;
	if(a<b && w%5==0)
	{
		b=b-a;
	}
	printf("%.2f",b);
	return 0;

	
}
