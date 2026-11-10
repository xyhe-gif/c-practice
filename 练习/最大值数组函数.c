#include<stdio.h>
int maxOfArray(int m[],int n){
	printf("sizeof(m) = %d\n", sizeof(m)); 
	int max=m[0];
	int i;
	for(i=1;i<n;i++){
		if(max<m[i]){
			max=m[i];
		}
	}
	return max;
}
int main(){
	int num[5]={2,6,9,15,7};
	printf("%d\n",maxOfArray(num,3));
	return 0;
}
