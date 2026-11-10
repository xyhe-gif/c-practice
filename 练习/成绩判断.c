#include <stdio.h>
int main()
{
	int x;
	printf("请输入成绩");
	scanf("%d",&x);
	if (90<=x&&x<=100) {
		printf("你的等级是:A");
	} else if (90>x&&x>=80) {
		printf("你的等级是:B");
	} else if (80>x&&x>=70) {
		printf("你的等级是:C");
	} else if (70>x&&x>=60) {
		printf("你的等级是:D");
	} else if (60>x&&x>=0) {
		printf("你的等级是:E");
	} else {
		printf("无效成绩");
	}
	return 0;
}
