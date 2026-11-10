#include <stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	printf("你的成绩是：%d\n",x);
	if (x>=0&&x<=100) {
	int y=x/10;
	switch (y) {
		case 10:
		case 9:
			printf("你的等级是:优秀\n");
			break;
		case 8:
			printf("你的等级是:良好\n");
			break;
		case 7:
			printf("你的等级是:中等\n");
			break;
		case 6:
			printf("你的等级是:及格\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		    printf("你的等级是:不及格\n");
		    break;
	}
    } else {
    	printf("成绩无效\n");
    }
	return 0;
}
