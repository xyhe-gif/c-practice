#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	float avg=(float)(a+b+c)/3.0 ;
	printf("平均数是:\n%.3f",avg);
	return 0;
} 
