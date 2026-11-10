#include <stdio.h>
int main(){
	int g[5],i;
	for (i=0;i<5;i++) {
	scanf("%d",&g[i]);
}
    for (i=0;i<5;i++){
	if (g[i]>=0&&g[i]<=100) {
	int y=g[i]/10;
	switch (y) {
		case 10:
		case 9:
			printf("你的等级是:A\n");
			break;
		case 8:
			printf("你的等级是:B\n");
			break;
		case 7:
			printf("你的等级是:C\n");
			break;
		case 6:
			printf("你的等级是:D\n");
			break;
		default:
			printf("你的等级是:E");
			break;
	}
    } 
}
	return 0;
}
