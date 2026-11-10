#include <stdio.h>
int main(){
	int n ;
	printf("输入一个摄氏温度:");
	scanf("%d",&n);
	float a= n*1.8+32;
	printf("华氏温度是%.3f\n",a);
	return 0;
}
