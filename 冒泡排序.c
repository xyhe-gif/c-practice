#include<stdio.h>
int main(){
	int m[5],x;
	for (x=0;x<5;x++) {
		scanf("%d",&m[x]);
	}
	int i;
	for (i=0;i<4;i++){
		for (x=0;x<4-i;x++){
			if (m[x]>m[x+1]){
				int y=m[x];
				m[x]=m[x+1];
				m[x+1]=y;
			}
		}
		
	}
    for (x=0;x<5;x++)
	printf("%d ",m[x]);
	return 0;
}
