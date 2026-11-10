#include<stdio.h>
void maopao(int a[],int b){
	int i,j;
	for(i=0;i<b-1;i++){
		for(j=0;j<b-1-i;j++){
		    if(a[j]>a[j+1]){
			    int x=a[j];
			    a[j]=a[j+1];
			    a[j+1]=x;
		    }
	    }
    }
}
int main(){
	int c[5]={5,4,3,2,1};
	int i;
	maopao(c,5);
    for(i=0;i<5;i++)
	printf("%d ",c[i]);
	return 0;
}
