#include<stdio.h>
#define P 3.14
int main(){
	int h,r,x;
	double v;
	scanf("%d%d",&h,&r);
	if (h>=1&&h<=500&&r>=1&&r<=100)
	{
		v=P*(r*r)*h/1000.0;
		if (v>=20) {
			printf("1");
		} else {
			x=20/v+1;
			printf("%d",x);
		}
		
	}
	return 0;
	
}
