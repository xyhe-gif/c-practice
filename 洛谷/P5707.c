#include<stdio.h>
int main(){
	int s,v,t;
	int T=480,h,m,z;
	scanf("%d%d",&s,&v);
	t=(s+v-1)/v+10;
	if (t<=T) z=T-t;
	else z=T+1440-t;
	while (z<0) z+=1440;
	h=z/60;
	m=z%60;
	printf("%02d:%02d",h,m);
    return 0;
}
