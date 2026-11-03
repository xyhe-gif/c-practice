#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int e,f;
	e=c-a;
	f=d-b;
	if (f<0) {
		f=d-b+60;
		e--;
		printf("%d %d",e,f);
	} else {
		printf("%d %d",e,f);
	}
	return 0;
}
