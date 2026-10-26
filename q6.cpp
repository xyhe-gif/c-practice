#include <stdio.h>
int main()
{
	short a=123456789987654321;
	long b=a*123;
	unsigned c=897456213-b;
	printf("a=%hd\nb=%ld\nc=%u",a,b,c);
	return 0;
}
