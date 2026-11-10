#include <stdio.h>
int main(){
	int x;
	int res=0;
	scanf("%d",&x);
	int y=x;
	while (x>1) {
		x/=2;
		res++;
	}
	printf("log2 of %d is %d",y,res);
	return 0;
}
