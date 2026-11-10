#include <stdio.h>
int main(){
	int i=1;
	int j;
	for (i;i<=9;i++) { 
	if (i==6) break;
		for (j=1;j<=i;j++) {
			printf("%d*%-d=%-3d", j , i, j*i);
			
	}
			printf("\n");
		
		
	}
	return 0;
}
