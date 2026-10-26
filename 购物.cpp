#include <stdio.h>
int main()
{
	float a;
	int b;
	float c;
	printf("请输入单价和数量和付款金额");
	scanf("%f%d%f",&a,&b,&c);
	float x=a*b;
	float z=c-x;
	printf("单价:%.2f\n数量:%d\n付款金额:%.2f",a,b,c);
	printf("\n总价是%.2f元",x);
	printf("\n找零%.2f元",z);
	return 0;
}
