#include <stdio.h>
int main()
{
	int a;
	printf("输入一个整数");
	scanf("%d",&a);
	if(a>0) {
		printf("正数");
	} else if (a==0) {
		printf("零");
	} else  {
		printf("负数");
	}
	return 0;
}
