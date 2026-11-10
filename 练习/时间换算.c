#include <stdio.h>
int main()
{
	int a;
	printf("请输入时长多少秒");
	scanf("%d",&a);
	int x=a/3600;
	int y=a%3600;
	int z=y/60;
	int n=a%60;
	printf("%d时%d分钟%d秒",x,z,n);
	return 0; 
}
