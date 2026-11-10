#include<stdio.h>
int main(){

	int i,x=0;
	int num[5];
	for (x=0;x<5;x++) {
		scanf("%d",&i);
		num[x]=i;
		
	}
	for (x=4;x>-1;x--) {
		printf("%d ",num[x]);
	}
	return 0;
	
	
	
}
