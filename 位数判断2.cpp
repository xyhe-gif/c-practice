#include <stdio.h>
int main()
{
	long long int a;
	long long int x=0;
	scanf("%lld",&a);
	while (a>0){
		x++;
		a/=10;
		
	}
	printf("%lld",x);
	return 0;
}
