#include <stdio.h>
int main()
{
	int a=1;
	int b=0;
	while (a<=5000){
		b=b+a;
		a++;	
	}
	printf("%d",b);
	return 0;
}
