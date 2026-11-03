#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a ,&b ,&c);
	double p=(a+b+c)/2.0;
	double z=p*(p-a)*(p-b)*(p-c);
	double S=sqrt(z);
	printf("%.1f",S);
	return 0;
	
}                            
